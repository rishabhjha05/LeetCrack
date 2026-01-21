class Solution {
public:
    bool gcd(int n,int m){
        int i=min(n,m);
        while(i>1){
            if(n%i==0 && m%i==0)
                return 0;
            i--;
        }
        return 1;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int s=nums.size(),count=0;
        for(int i=0;i<s-1;i++){
            int n=nums[i];
            while(n/10!=0)
                n/=10;
            for(int j=i+1;j<s;j++){  
                int m=nums[j]%10;
                if(gcd(n,m))
                    count++;
            }
        }
        return count;
    }
};