class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());

        long long sum=mass;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]>sum) return 0;
            else sum+=asteroids[i];
        }

        return 1;
    }
};
