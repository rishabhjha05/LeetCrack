class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),i=n-1;
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
            int mx=nums[i],j=nextG[i];
            while(j<nextG.size() && j<i+k)
            {
                mx=nums[j];
                j=nextG[j];
            }
            sol.push_back(mx);
        }
        return sol;
    }
};