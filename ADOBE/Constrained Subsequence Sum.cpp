class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int ans=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            while(!pq.empty() && i-pq.top().second>k)
            pq.pop();

            int currsum=nums[i];
            if(!pq.empty()) currsum+=max(0,pq.top().first);
            ans=max(ans,currsum);
            pq.push({currsum,i});

        }
        return ans;

    }
};
