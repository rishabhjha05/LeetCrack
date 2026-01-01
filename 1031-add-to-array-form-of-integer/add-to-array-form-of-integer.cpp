class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size(),i=n-1,carry=0;
        vector<int> num2;
        while(i>=0 || k>0){
            int numval=0,d=k%10;
            if(i>=0)
                numval=num[i];
            int sum=numval+d+carry;
            num2.insert(num2.begin(),sum%10);
            carry=sum/10;
            k/=10;
            i--;
        }
        if(carry!=0)
            num2.insert(num2.begin(),carry);
        return num2;
    }
};