class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=-1,n=arr.size(),i=1,count=1;
        while(i<n)
        {
            if(arr[i]==arr[i-1])
                count++;
            else if(count==arr[i-1]){
                cnt=max(cnt,arr[i-1]);
                count=1;
            }
            else
                count=1;
            i++;
        }
        if(count==arr[i-1]){
            cnt=max(cnt,arr[i-1]);
            count=1;
        }
        return cnt;
    }
};