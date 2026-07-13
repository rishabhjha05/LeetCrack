class Solution {
public:
    void fill(vector<int>& ans,int n,int low,int high){
        int num=0,s=1,e,x=1;
        for(int i=0;i<n;i++)
            num*=10,num+=x,x++;
        e=num%10;
        while(e!=0){
            if(num>=low && num<=high)
                ans.push_back(num);
            else if(num>high)
                return;
            num=0,s++,e,x=s;
            for(int i=0;i<n;i++)
                num*=10,num+=x,x++;
            e=num%10;
        }
        return;
    }
    vector<int> sequentialDigits(int low, int high) {
        int n=0,m=0,num=low;
        while(num)
            n++,num/=10;
        num=high;
        while(num)
            m++,num/=10;
        vector<int> ans;
        for(int i=n;i<=m;i++)
            fill(ans,i,low,high);
        return ans;
    }
};