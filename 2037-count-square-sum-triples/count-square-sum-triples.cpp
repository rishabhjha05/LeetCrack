class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                float x=sqrt((i*i)+(j*j));
                if(x<=n){
                    int i=1,j=n;
                    while(i<=j){
                        int mid=(i+j)/2;
                        if(mid>x)
                            j=mid-1;
                        else if(mid<x)
                            i=mid+1;
                        else
                            break;
                    }
                    if(i<=j)
                    count++;
                }
            }
        }
        return count;
    }
};