class Solution {
public:
    int countMonobit(int n) {
        int count=1,i=1;
        while(i<=n)
            i<<=1,i++,count++;
        return count;
    }
};