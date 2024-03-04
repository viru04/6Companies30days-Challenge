class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> ans;

        for(auto &val:queries)
        {
            int trim=nums[0].size()-val[1];
            priority_queue<pair<string,int>> pq;

            for(int i=0;i<n;i++)
            {
                string temp=nums[i].substr(trim,val[1]);

                if(pq.size()<val[0]) pq.push({temp,i});
                else
                {
                   if(pq.top().first >temp)
                   {
                       pq.pop();
                       pq.push({temp,i});
                   }
                }
            }

            ans.push_back(pq.top().second);
        }

        return ans;
    }
};
