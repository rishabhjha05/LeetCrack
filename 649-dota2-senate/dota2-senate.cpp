class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> idx,r,d;
        int i=0;
        for(char ch : senate){
            idx.push(i);
            if(ch=='R')
                r.push(i);
            else
                d.push(i);
            i++;
        }
        while(idx.size()>1){
            if(senate[idx.front()]=='X')
                idx.pop();
            else if(senate[idx.front()]=='R')
            {
                if(d.size()==0)
                    return "Radiant";
                else{
                    senate[d.front()]='X';
                    d.pop();
                    idx.push(idx.front());
                    idx.pop();
                    r.push(r.front());
                    r.pop();
                }
            }
            else{
                if(r.size()==0)
                    return "Dire";
                else{
                    senate[r.front()]='X';
                    r.pop();
                    idx.push(idx.front());
                    idx.pop();
                    d.push(d.front());
                    d.pop();
                }
            }
        }
        if(r.size()==0)
            return "Dire";
        return "Radiant";
    }
};