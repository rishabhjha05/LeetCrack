class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx,count=0;
        if(ruleKey=="type")
            idx=0;
        else if(ruleKey=="color")
            idx=1;
        else
            idx=2;
        for(vector<string> vec: items)
            if(vec[idx]==ruleValue)
                count++;
        return count;
        
    }
};