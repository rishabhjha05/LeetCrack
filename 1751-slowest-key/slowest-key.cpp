class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char,int> duration;
        int pt=0,d=0,n=releaseTimes.size();
        char ans;
        // for(int i=0;i<n;i++){
        //     if(duration[keysPressed[i]]<=(releaseTimes[i]-pt))
        //         duration[keysPressed[i]]=(releaseTimes[i]-pt);
        //     pt=releaseTimes[i];
        // }
        // for(auto i: duration){
        //     if(i.second>d)
        //         ans=i.first;
        //     else if(i.second==d)
        //         ans=(char)max((int)i.first,(int)ans);
        // }
        for(int i=0;i<n;i++)
        {
            if(d<(releaseTimes[i]-pt))
                ans=keysPressed[i],d=(releaseTimes[i]-pt);
            else if(d==releaseTimes[i]-pt && (int)ans<(int)keysPressed[i])
                ans=keysPressed[i];
            pt=releaseTimes[i];
        }
        return ans;
    }
};