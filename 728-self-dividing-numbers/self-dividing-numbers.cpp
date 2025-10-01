class Solution {
public:
    bool isIt(int n){
        int m=n;
        while(m){
            int ld=m%10;
            if(ld==0 || n%ld!=0)
                return false;
            m/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left<=right){
            if(isIt(left))
                ans.push_back(left);
            left++;
        }
        return ans;
    }
};