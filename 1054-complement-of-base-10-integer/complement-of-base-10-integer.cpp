class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        vector<int> vec,rev;
        int j=0,num=0;
        while(n){
            vec.push_back(n%2);
            n/=2;
        }
        for(int i=vec.size()-1;i>=0;i--)
            rev.push_back(!vec[i]);
        for(int ele:rev)
            cout<<ele<<" ";
        for(int i=rev.size()-1;i>=0;i--)
            num+=rev[i]*pow(2,j++);
        return num;
    }
};