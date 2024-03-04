class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        set<pair<int,int>> s;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
         
        int ans=0;
        for(auto &val:m) if(val.second>1) ans++;

        for(int i=0;i<nums.size();i++)
        {
            if(k!=0 && m.find(nums[i]+k)!=m.end())
            {
                s.insert({nums[i],nums[i]+k});
            } 
        }

        return k==0 ? ans+s.size() :s.size();

    }
};
