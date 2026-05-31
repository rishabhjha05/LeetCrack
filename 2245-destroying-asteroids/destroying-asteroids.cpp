class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int i=0,n=asteroids.size();
        while(i<n && mass>=asteroids[i])   
            mass+=asteroids[i++];
        return i==n;

    }
};