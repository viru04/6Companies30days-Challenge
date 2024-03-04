class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0,i=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int j=0;j<s.size();j++)
        {
            if(i<g.size() && s[j]>=g[i]) i++;
        }
        return i;
    }
};
