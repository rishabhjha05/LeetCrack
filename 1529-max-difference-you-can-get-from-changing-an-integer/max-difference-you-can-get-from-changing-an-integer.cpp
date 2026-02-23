class Solution {
public:
    int maxDiff(int num) {
        int a=0,b=0,x;
        vector<int> n;
        while(num){
            n.push_back(num%10);
            num/=10;
        }
        reverse(n.begin(),n.end());
        for(int ele : n)
            if(ele!=9){
                x=ele;
                break;
            }
        for(int ele : n){
            a*=10;
            if(ele==x)
                a+=9;
            else 
                a+=ele;
        }
        for(int ele : n)
            if(ele>1){
                x=ele;
                break;
            }
        for(int i=0;i<n.size();i++){
            b*=10;
            if(n[i]==x && i!=0 && x!=n[0])
                b+=0;
            else if(n[i]==x)
                b+=1;
            else
                b+=n[i];
        }
        cout<<a<<" "<<b;
        return a-b;
    }
};