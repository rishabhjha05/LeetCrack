class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.size(),i=0;
        cout<<s1<<"\n"<<s2;
        while(i<n && s1[i]==s2[i])
            i++;
        if(i<n && s1[i]<=s2[i]){
            while(i<n){
                if(s1[i]>s2[i])
                    return 0;
                i++;
            }
        }
        else{
            while(i<n){
                if(s1[i]<s2[i])
                    return 0;
                i++;
            }
        }
        return 1;
    }
};