class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum=0,org=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            org+=(i*nums[i]);
        }

        long long max=org;
        int n=nums.size();

        for(int i=n-1;i>=0;i--)
        {
            org+=sum-(nums[i]*n);
            if(org>=max) max=org;
        }

        return max;
    }
};
