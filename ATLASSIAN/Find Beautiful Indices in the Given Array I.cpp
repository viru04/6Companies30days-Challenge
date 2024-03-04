class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        size_t x=s.find(a);
        size_t y=s.find(b);
        if(a.size()>s.size() || b.size()>s.size()) return {};
        
        int maxi1=INT_MIN;
        bool flag=1;
        
        set<int> st;
        while(flag)
        {
            if(0<=x && x<=s.size()-a.size())
            {
                    maxi1=max(maxi1,(int)x);
                    bool flag1=1;
                    while(flag1)
                    {
                        int prev=y;
                        if(y>=s.size())
                        {
                            y=prev;
                            flag1=0;
                        }
                        
                        if(0<=y && y<=s.size()-b.size() && abs((int)y-(int)x)<=k)
                        {
                            st.insert(x);
                        }
                        
                        
                        y=s.find(b,y+1);
                }
            }
            int prev=x;
            x=s.find(a,x+1);
            if(x>=s.size())
            {
                x=prev;
                flag=0;
            }
            
        }
        
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};
