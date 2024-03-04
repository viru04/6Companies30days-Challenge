class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        
        int cnt1=1,cnt2=1,maxi1=0,maxi2=0;
        
        for(int i=0;i<h.size()-1;i++)
        {
            if(h[i+1]-h[i]==1)
            {
                cnt1++;
                maxi1=max(maxi1,cnt1);
            }
            else
            {
                cnt1=1;
            }
        }
        maxi1=max(maxi1,cnt1);
        
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                cnt2++;
                maxi2=max(maxi2,cnt2);
            }
            else
            {
                cnt2=1;
            }
        }
        maxi2=max(maxi2,cnt2);
        
        int x=min(maxi1,maxi2)+1;
        
        return x*x;
    }
};
