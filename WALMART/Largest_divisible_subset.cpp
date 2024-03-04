class Solution {
public:
    vector<int> solve(int index,vector<int> &nums,unordered_map<int,vector<int>> &dp)
    {
       if(index==nums.size()) return {};
    
       if(dp.find(index)!=dp.end()) return dp[index];
       
       vector<int> temp;
       for(int i=0;i<index;i++)
       {
           if(nums[index]%nums[i]==0)
           {
               vector<int> sub=solve(i,nums,dp);

               if(sub.size()>temp.size()) temp=sub;
           }
       }
       
       temp.push_back(nums[index]);
       return dp[index]=temp;
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        unordered_map<int,vector<int>> dp;
        vector<int> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            vector<int> sub=solve(i,nums,dp);
            if(sub.size()>ans.size()) ans=sub;
        }

        return ans;
    }
};
