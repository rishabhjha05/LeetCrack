class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> vec;
        int n=s.size();
        for(int i=0;i<n;){
            char ch=s[i];
            int len=0;
            while(i<n && s[i]==ch)
                i++,len++;
            vec.push_back(len);
        }
        int ans=0,i=0,j=1,m=vec.size();
        for(int ele : vec)
            cout<<ele<<" ";
        while(j<m)
            ans+=min(vec[i++],vec[j++]);
        return ans;
    }
};