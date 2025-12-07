class Solution {
public:
    int toBin(int num){
        if(num==0)
            return 0;
        string bin="";
        while(num>0){
            bin.push_back('0' + (num&1));
            num>>=1;
        }
        reverse(bin.begin(),bin.end());
        return stoi(bin);
    }
    bool hasTrailingZeros(vector<int>& nums) {
        int count=0;
        for(int ele : nums){
            int x=toBin(ele);
            if(x%10==0)    
                count++;
        }
        if(count>=2)
            return true;
        return false;
    }
};