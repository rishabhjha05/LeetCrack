class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for(long long ele: nums)
        {
            if(st.size()==0)
                st.push(ele);
            else{
                while(st.size()!=0 && ele==st.top())
                    ele+=st.top(),st.pop();
                st.push(ele);
            }
        }
        vector<long long> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};