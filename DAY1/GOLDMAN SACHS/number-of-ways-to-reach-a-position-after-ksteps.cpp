class Solution {
public:
    int solve(int s,int e,int k,vector<vector<int>> &dp)
    {
        if(s==e && k==0) return 1;

        if(k<=0) return 0;
        
        if(dp[s+1000][k]!=-1) return dp[s+1000][k]%1000000007;
        int left=solve(s-1,e,k-1,dp);
        int right=solve(s+1,e,k-1,dp);

        return dp[s+1000][k]=(left+right)%1000000007;
    }
    int numberOfWays(int s, int e, int k) {
        vector<vector<int>> dp(3001,vector<int>(3001,-1));
        return solve(s,e,k,dp);
    }
};
