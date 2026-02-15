class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        int i=0,n=text.size();
        vector<string> ans;
        while(i<n){
            string str="";
            while(i<n && text[i]!=' ')
                str+=text[i++];
            if(str==first){
                int j=i;
                i++;
                str="";
                while(i<n && text[i]!=' ')
                    str+=text[i++];
                if(str==second){
                    i++;
                    str="";
                    while(i<n && text[i]!=' ')
                        str+=text[i++];
                    if(str.size()>0)
                    ans.push_back(str);
                }
                i=j;
            }
            i++;
        }
        return ans;
    }
};