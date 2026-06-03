class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int m=fb.size(),i=0,l=m-1,count=0,pi=0;
        while(i<m && fb[i]!=1)
            i++;
        while(l>=0 && fb[l]!=1)
            l--;
        if(i>l){
            if(m%2==0)
                m--;
            m/=2,m++;
            return m>=n;
        }
        pi+=i/2;
        pi+=(m-l-1)/2;
        while(i<=l){
            if(fb[i]==1 && count%2==1)
                pi+=count/2,count=0;
            else if(fb[i]==1)
                pi+=(count-1)/2,count=0;
            else
                count++;
            i++;
        }
        return pi>=n;
    }
};