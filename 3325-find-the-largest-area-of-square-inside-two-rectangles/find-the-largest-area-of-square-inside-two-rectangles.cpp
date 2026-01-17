class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long ans=0,i=0,n=bottomLeft.size();
        while(i<n){
            for(int j=i+1;j<n;j++){
                int x1=bottomLeft[i][0],y1=bottomLeft[i][1],x2=topRight[i][0],y2=topRight[i][1];
                int x3=bottomLeft[j][0],y3=bottomLeft[j][1],x4=topRight[j][0],y4=topRight[j][1];
                int x5=max(x1,x3),y5=max(y1,y3),x6=min(x2,x4),y6=min(y2,y4);
                int w=x6-x5,l=y6-y5;
                if(w>=0 && l>=0){
                    long long area=min(w,l);
                    area*=area;
                    ans=max(ans,area);
                }
            }
            i++;
        }
        return ans;

    }
};