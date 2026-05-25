class Solution {
public:
    int fn(long long r,int k){
        return (r*10+1)%k;
    }
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)
            return -1;
        long long n=0,count=0;
        unordered_map<int,int> freq;
        while(true){
            count++;
            n=fn(n,k);
            if(n==0)
                return count;
            else if(freq[n]<1)
                freq[n]++;
            else
                return -1;
        }
        return -1;
    }
};