class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int> freq;
        for(char ch: password)
            freq[ch]++;
        int pt=0;
        for(auto itr: freq){
            int val=(int)itr.first;
            if(val>96 && val<123)
                pt+=1;
            else if(val>64 && val<91)
                pt+=2;
            else if(val>47 && val<58)
                pt+=3;
            else 
                pt+=5;
        }
        return pt;
    }
};