class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> freq;
        int mx=0,count=0;
        for(int i=1;i<=n;i++){
            int sum=0,num=i;
            while(num){
                sum+=num%10;
                num/=10;
            }
            freq[sum]++;
            mx=max(mx,freq[sum]);
        }
        for(auto i:freq)
            if(i.second==mx)
                count++;
        return count;
    }
};