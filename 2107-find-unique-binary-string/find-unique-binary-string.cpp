class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        map<string,int> freq;
        string s ="";
        for(string str : nums)
            freq[str]++,s+='1';
        int n=s.size();
        for(int i=0;i<n;i++){
            string str=s;
            for(int j=i;j<n;j++){
                str[j]='0';
                if(freq[str]==0)
                    return str;
            }
        }
        return s;
    }
};