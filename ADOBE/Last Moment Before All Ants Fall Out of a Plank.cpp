class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;

        for(auto &val:left) if(val!=0) ans=max(ans,val);

        for(auto &val:right) if(val!=n) ans=max(ans,abs(n-val));

        return ans;
    }
};
