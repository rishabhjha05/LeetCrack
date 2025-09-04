class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),i=n-1,j=0;
        vector<int> sol,nextG(n);
        stack<int> st;
        while(i>=0){
            while(st.size()!=0 && nums[st.top()]<=nums[i])
                st.pop();
            if(st.size()==0)
                nextG[i]=n;
            else
                nextG[i]=st.top();
            st.push(i--);
        }
        for(int i=0;i<=n-k;i++){
            int mx=nums[i];
            while(true)
            {
                mx=nums[j];
                if(nextG[j]>=i+k)
                    break;
                j=nextG[j];
            }
            if(i+1>j)
                j=i+1;
            sol.push_back(mx);
        }
        return sol;
    }
};