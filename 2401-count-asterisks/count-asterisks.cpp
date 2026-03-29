class Solution {
public:
    int countAsterisks(string s) {
        vector<int> vec;
        int count=0,flag=1;
        for(char ch : s){
            if(ch=='|' && flag)
                vec.push_back(count),count=0,flag=0;
            else if(ch=='|')
                count=0,flag=1;
            else if(ch=='*')
                count++;
        }
        if(flag && count)
            vec.push_back(count);
        int ans=0;
        for(int ele : vec)
            ans+=ele;
        return ans;
    }
};