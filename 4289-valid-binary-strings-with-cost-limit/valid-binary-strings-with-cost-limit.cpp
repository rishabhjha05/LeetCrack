class Solution {
public:
    string toBin(int num){
        string str="";
        while(num>1){
            int rem=num%2;
            str+='0'+rem;
            num/=2;
        }
        str+='1';
        return str;
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        int o=pow(2,n);
        string st="";
        for(int i=0;i<n;i++)
            st+='0';
        ans.push_back(st);


        for(int i=1;i<o;i++){
            int num=i,m=num%2,j=n-1,c=m*j;
            num=num>>1;
            while(num>0 && (num&m)== 0)
                m=num%2,j--,c+=m*j,num>>=1;
            if(num==0 && c<=k){
                string s=toBin(i);
                while(s.size()<n)
                    s.push_back('0');
                reverse(s.begin(),s.end());
                ans.push_back(s);
            }
        }
        return ans;
    }
};