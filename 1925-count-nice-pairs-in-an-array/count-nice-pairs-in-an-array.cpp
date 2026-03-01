class Solution {
public:
    int rev(int n){
        int num=0;
        while(n){
            num*=10;
            num+=n%10;
            n/=10;
        }
        return num;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int mod=1e9+7,ans=0;
        for(int ele : nums){
            int num=ele-rev(ele);
            cout<<num<<endl;
            ans=(ans+freq[num])%mod;
            freq[num]++;
        }
        return ans;
    }
};