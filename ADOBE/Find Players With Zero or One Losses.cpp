
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int win[1000001];
        int lose[1000001];
        for(int val=0;val<matches.size();val++)
        {
            win[matches[val][0]]++;
            lose[matches[val][1]]--;
        }
        vector<vector<int>> ans;
        set<int> f,s;
        for(int val=0;val<matches.size();val++)
        {
            if(lose[matches[val][0]]==0)
            f.insert(matches[val][0]);
            if(lose[matches[val][1]]==-1)
            s.insert(matches[val][1]);
        }
        vector<int> fv(f.begin(),f.end());
        vector<int> sv(s.begin(),s.end());
        ans.push_back(fv);
        ans.push_back(sv);
        memset(win,0,sizeof(win));
        memset(lose,0,sizeof(lose));
        return ans;
    }
};
