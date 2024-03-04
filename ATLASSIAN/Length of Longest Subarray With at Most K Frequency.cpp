class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        if(nums.size()==1)
        {
            return 1;
        }
        unordered_map<int,int> m;
        
        int ans=0,i=0,l=0;
        while(i<nums.size())
        {
            while(i<nums.size() && m[nums[i]]<k)
            {
                m[nums[i]]++;
                i++;
            }
            
            ans=max(ans,i-l);
            m[nums[l]]--;
            l++;
        }
        
        return ans;
    }
};
