class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int ele : digits)
            freq[ele]++;
        for(int i=100;i<=999;i+=2){
            int num=i;
            bool found=true;
            unordered_map<int,int> f=freq;
            while(num){
                int d=num%10;
                if(f[d]==0){
                    found=false;
                    break;
                }
                else
                    f[d]--;
                num/=10;
            }
            if(!found)
                continue;
            else
                ans.push_back(i);
        }
        return ans;
    }
};