class Solution {
public:
    bool Valid(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return 1;
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> check,ans,pre;
        for(string str: words){
            if(Valid(str[0]) && Valid(str[str.size()-1]))
                check.push_back(1);
            else
                check.push_back(0);
        }
        int p=0;
        for(int ele : check)
            pre.push_back(p),p+=ele;
        for(vector<int> vec: queries){
            int count=pre[vec[1]]-pre[vec[0]];
            count+=check[vec[1]];
            ans.push_back(count);
        }
        return ans;
    }
};