class Solution {
public:
    int setBits(int num){
        int count=0;
        while(num){
            if(num&1)
                count++;
            num=num>>1;
        }
        return count;
    }
    bool canSortArray(vector<int>& nums) {
        vector<vector<int>> check;
        vector<int> bits;
        for(int ele :nums)
            bits.push_back(setBits(ele));
        for(int ele : bits)
            cout<<ele<<" ";
        int n=nums.size(),mn=nums[0],mx=nums[0];
        for(int i=0;i<n;i++){
            mn=nums[i],mx=nums[i];
            while(i<n-1 && bits[i]==bits[i+1]){
                mx=max(mx,nums[i+1]);
                mn=min(mn,nums[i+1]);
                i++;
            }
            check.push_back({mn,mx});
        }
        int i=0,j=1;
        while(j<check.size()){
            if(check[j][0]<check[i][1])
                return 0;
            i++,j++;
        }
        return 1;
    }
};