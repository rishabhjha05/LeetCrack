class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        for(int ele : arr){
            int rem=ele%k;
            if(rem<0)
                freq[rem+k]++;
            else
                freq[rem]++;
        }
        for(auto itr: freq){
            if(freq[itr.first]!=freq[(k-itr.first)%k] || (itr.first==k-itr.first && freq[itr.first]%2!=0))
                return false;
        }

        return true;
    }
};