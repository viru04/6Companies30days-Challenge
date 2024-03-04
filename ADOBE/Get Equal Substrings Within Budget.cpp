class Solution {
public:
    int equalSubstring(string s, string t, int cost) {
        int j=0,ans=0,curr_sum=0;

        for(int i=0;i<s.size();i++)
        {
            curr_sum+=(abs(s[i]-t[i]));
            
            while(j<i && curr_sum>cost)
            {
                curr_sum-=(abs(s[j]-t[j]));
                j++;
            }

            if(curr_sum<=cost) ans=max(ans,i-j+1);
        }

        return ans;
    }
};
