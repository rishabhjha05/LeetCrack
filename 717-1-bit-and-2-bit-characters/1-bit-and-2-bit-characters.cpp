class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size(),i=0;
        bool found=false;
        while(i<n){
            if(i==n-1)
                found=true;
            if(bits[i]==1)
                i+=2;
            else
                i++;
        }
        return found;
    }
};