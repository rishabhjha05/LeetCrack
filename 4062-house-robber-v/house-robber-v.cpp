class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        long long ans=0;
        int i=1,n=nums.size();
        vector<int> vec;
        while(i<n){
            vec={};
            while(i<n && colors[i]==colors[i-1])
                vec.push_back(nums[i-1]),i++;
            vec.push_back(nums[i-1]);
            long long s1=0,s2=0,m=vec.size();
            for(int j=0;j<m;j++){
                
                if(j==m-2 && m%2==0)
                    s1+=max(vec[j],vec[m-1]);
                else if(j%2==0 && j!=m-2)
                    s1+=vec[j];
                else
                    s2+=vec[j];
            }
            ans+=max(s1,s2),i++;
            vec={};
        }
        cout<<ans<<"\n";
        if(i==n)
            vec.push_back(nums[i-1]);
        long long s1=0,s2=0,m=vec.size();            
        for(int j=0;j<m;j++){
            if(j%2==0)
                s1+=vec[j];
            else
                s2+=vec[j];
        }
        ans+=max(s1,s2);
        return ans;
    }
};