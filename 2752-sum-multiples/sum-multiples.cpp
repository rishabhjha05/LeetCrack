class Solution {
public:
    int sumOfMultiples(int n) {
        if(n<3)
            return 0;
        unordered_map<int,int> freq;
        int sum=0,i=3;
        while(i<=n)
        {
            freq[i]++;
            i+=3;
        }
        i=5;
        while(i<=n)
        {
            freq[i]++;
            i+=5;
        }
        i=7;
        while(i<=n)
        {
            freq[i]++;
            i+=7;
        }
        for(auto i:freq)
            sum+=i.first;
        return sum;
    }
    //{3,6,9,12,15}
};