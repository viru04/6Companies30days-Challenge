class Solution {
public:
    bool static cmp(pair<string,int> a,pair<string,int> b)
    {
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<string,int>> v;
        unordered_map<string,int> m;
        
        for(auto &val:words) m[val]++;

        for(auto &val:m) v.push_back({val.first,val.second});

        sort(v.begin(),v.end(),cmp);
        vector<string> ans;
        int n=v.size();
        for(int i=0;i<=min(n-1,k-1);i++) ans.push_back(v[i].first);

        return ans;
    }
};
