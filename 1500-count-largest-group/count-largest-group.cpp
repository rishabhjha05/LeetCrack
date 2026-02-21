class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> freq;
        for(int i=1;i<=n;i++){
            int sum=0,num=i;
            while(num){
                sum+=num%10;
                num/=10;
            }
            freq[sum]++;
        }
        int ans=0,count=0;
        for(auto i:freq)
            ans=max(ans,i.second);
        
        for(auto i:freq)
            if(i.second==ans)
                count++;
        return count;
    }
};