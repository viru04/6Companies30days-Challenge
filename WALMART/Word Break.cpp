class Solution {
public:
    vector<int> dp;
    bool solve(int index,string &s,unordered_map<string,int> &m)
    {
        if(index>=s.size()) return 1;

        if(dp[index]!=-1) return dp[index];

        for(int i=1;i<=s.size();i++)
        {
            string temp=s.substr(index,i);
            if(m.find(temp)!=m.end() && solve(index+i,s,m)) return dp[index]=1;
        }

        return dp[index]=0;
    }
    bool wordBreak(string s, vector<string>& word) {
        int n=s.size();
        dp.resize(n+1,-1);
        unordered_map<string,int> m;
        for(auto &val:word) m[val]++;

        return solve(0,s,m);
    }
};
