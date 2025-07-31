class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size())
            return false;
        else
        {
            sort(ransomNote.begin(),ransomNote.end());
            sort(magazine.begin(),magazine.end());
            cout<<ransomNote;
            cout<<endl;
            cout<<magazine;
            int i=0,j=0;
            while(i<ransomNote.size()){
                while(j<magazine.size() && ransomNote[i]!=magazine[j])
                    j++;
                if(j==magazine.size())  return false;
                i++;
                j++;
            }
        }
        return true;
    }
};