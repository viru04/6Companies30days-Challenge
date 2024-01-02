class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        long long sum=0;
        for(int i=0;i<n;i++) sum+=arr[i];

        long long nsum=0;
        for(int i=1;i<=n;i++) nsum+=i;
        
        n=n+1;
        for(int i=0;i<n-1;i++)
        {
            long long x=arr[i]/n;
            if(x>=1) arr[arr[i]-(x*n)-1]+=n;
            else arr[arr[i]-1]+=n;
        }
        
        //checking for repeated number
        for(int i=0;i<n-1;i++)
        {
            long long x=arr[i]/n;
            if(x>=2) ans.push_back(i+1);
        }
        
        //missing number
        ans.push_back(ans[0]-(sum-nsum));
        return ans;
    }
};
