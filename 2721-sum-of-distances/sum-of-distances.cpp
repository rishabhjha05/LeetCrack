class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        map<int,vector<int>> idx;
        vector<long long> ans(n,0);
        for(int i=0;i<n;i++)
            idx[nums[i]].push_back(i);
        for(auto itr: idx){

            if(itr.second.size()>1){
                long long m=itr.second.size(),sum=0;
                vector<long long> pre,suff(n); 
                for(int ele : itr.second)
                    pre.push_back(sum),sum+=ele;
                sum=0;
                for(auto i=m;i-->0;)
                    suff[i]=sum,sum+=itr.second[i];
                // for(auto i: pre)
                //     cout<<i<<" ";
                // cout<<endl;
                // for(auto i: suff)
                //     cout<<i<<" ";
                for(int i=0;i<m;i++){
                    int ele=itr.second[i];
                    ans[itr.second[i]]=(1LL*i*ele-pre[i])+(suff[i]-(m-i-1)*ele*1LL);
                }
            }
        }
        return ans;
    }
};