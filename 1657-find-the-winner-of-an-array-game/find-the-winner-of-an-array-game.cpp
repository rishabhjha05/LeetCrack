class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        queue<int> q;
        map<int,int> freq;
        int n=arr.size(),s=min(arr[0],arr[1]),l=max(arr[0],arr[1]);
        if(n<=k){
            sort(arr.begin(),arr.end());
            return arr[n-1];
        }
        freq[l]++;
        for(int i=2;i<n;i++)
            q.push(arr[i]);
        while(true){
            if(freq[l]==k)
                return l;
            q.push(s);
            s=min(l,q.front());
            l=max(l,q.front());
            freq[l]++;
            q.pop();
        }
        return -1;
    }
};