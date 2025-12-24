class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0,n=capacity.size(),i=n-1;
        for(int ele : apple)
            sum+=ele;
        sort(capacity.begin(),capacity.end());
        while(sum>0)
            sum-=capacity[i--];
        return n-i-1;
    }
};