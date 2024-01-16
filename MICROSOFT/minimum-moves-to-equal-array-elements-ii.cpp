class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i=0,j=nums.size()-1,ans=0;
        while(i<j)
        {
            ans+=abs(nums[i]-nums[j]);
            i++,j--;
        }

        return ans;
    }
};
