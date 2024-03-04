class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());

        while(k--)
        {
            int t=pq.top();
            pq.pop();
            t+=1;
            pq.push(t);
        }

        long long ans=1;
        while(!pq.empty())
        {
            long long t=pq.top();
            ans=(ans*t)%1000000007;
            pq.pop();
        }

        return ans%1000000007;
    }
};
