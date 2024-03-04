class Solution {
public:
    bool static cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.first>b.first;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       vector<pair<int,int>> v;
       for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});

       sort(v.begin(),v.end(),cmp); 
       vector<int> ans;
       for(int i=0;i<v.size() && k--;i++) ans.push_back(v[i].second); 

       sort(ans.begin(),ans.end());
       for(int i=0;i<ans.size();i++) ans[i]=nums[ans[i]];

       return ans;
    }
};
