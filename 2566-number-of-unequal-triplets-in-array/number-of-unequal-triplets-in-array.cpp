class Solution {
public:
    int unequalTriplets(vector<int>& arr) {
        int count=0,n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]!=arr[j]){
                    for(int k=j+1;k<n;k++){
                        if(arr[j]!=arr[k] && arr[i]!=arr[k])
                            count++;
                    }
                }
            }
        }
        return count;
    }
};