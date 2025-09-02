class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freqTable;
        for (char c : s) {
            freqTable[c]++;
        }
        int oddMax=INT_MIN,evenMin=INT_MAX;
        for (auto &entry : freqTable) {
            if(oddMax<entry.second && entry.second%2!=0)
                oddMax=entry.second;
            else if(evenMin>entry.second && entry.second%2==0)
                evenMin=entry.second;
        }
        return oddMax-evenMin;
    }
};