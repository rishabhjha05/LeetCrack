class Solution {
public:
    int smallestNumber(int n) {
        if(n==0)
            return 1;
        int count=0,ans=0;
        while(n){
            cout<<"Before : "<<n;
            n=n>>1,count++;
            cout<<"After : "<<n<<endl;
        }
        cout<<count;
        while(count>=0)
            ans+=pow(2,--count);
        return ans;
    }
};