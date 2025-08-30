class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count=0;
        int i=0,n=candyType.size();
        sort(candyType.begin(),candyType.end());
        while(i<n){
            while(i<n-1 && candyType[i]==candyType[i+1])
                i++;
            count++;
            i++;
        }
        if(count>=n/2)
            return n/2;
        else
            return count;
    }
};