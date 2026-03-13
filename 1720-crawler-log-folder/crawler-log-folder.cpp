class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(string str: logs){
            if(str!="./" && str!="../")
                count++;
            else if(str!="./" && count)
                count--;
        }
        return count;
    }
};