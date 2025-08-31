class Solution {
public:
    bool isPerfectSquare(int num) {
        bool found=false;
        int i=0,j=num;
        while(i<=j){
            long long mid=(i+j)/2;
            if(mid*mid>num)
                j=mid-1;
            else if(mid*mid<num)
                i=mid+1;
            else
            {
                found=true;
                break;
            }
        }
        return found;
    }
};