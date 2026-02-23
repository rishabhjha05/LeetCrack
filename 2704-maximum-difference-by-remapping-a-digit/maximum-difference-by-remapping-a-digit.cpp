class Solution {
public:
    int minMaxDifference(int num) {
        vector<int> n;
        while(num){
            n.push_back(num%10);
            num/=10;
        }
        reverse(n.begin(),n.end());
        int a=0,b=0,x;
        for(int ele : n)
            if(ele<9){
                x=ele;
                break;
            }
        for(int ele: n){
            a*=10;
            if(ele==x)
                a+=9;
            else
                a+=ele;
        }
        x=n[0];
        for(int ele: n){
            b*=10;
            if(ele==x)
                b+=0;
            else
                b+=ele;
        }
        return a-b;
    }
};