class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)
            return -1;
        else if(money<8)
            return 0;
        int m=money/8,ans=m;
        if(m>children)
            return children-1;
        else if(m==children && money%8==0)
            return children;
        else if(m==children)
            return children-1;
        children-=m,m=money%8;
        while(children>m)
            m+=8,children++,ans--;
        if(children==1 && m==4)
            ans--;
        return ans;
    }
};