class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(string str: arr)
            freq[str]++;
        for(string str: arr){
            if(freq[str]==1)
            {
                if(k==1)
                    return str;
                k--;
            }
        }
        return "";
    }
};