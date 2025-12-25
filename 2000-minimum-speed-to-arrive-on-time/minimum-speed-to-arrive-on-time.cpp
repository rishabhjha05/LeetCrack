class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        long long low=1,high=1e7,ans=-1,n=dist.size();
        while(low<=high){
            long long mid=(low+high)/2;
            double hr=0.0;
            for(int i=0;i<n-1;i++)
            {
                if(hr>hour)
                    break;
                hr+=ceil((double)dist[i]/mid);
            }
            hr+=(double)dist[n-1]/mid;
            if(hr<=hour){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
            
        }
        return ans;
    }
};