class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& at) {
        vector<string> ans;
        unordered_map<string,vector<int>> m;
        
        for(int i=0;i<at.size();i++)
        {
            m[at[i][0]].push_back(stoi(at[i][1]));
        }
        
        for(auto &val:m)
        {
            sort(val.second.begin(),val.second.end());
            for(int i=0;i<val.second.size();i++)
            {
                int count=1;
                for(int j=i+1;j<val.second.size();j++)
                {
                    if(abs(val.second[i]-val.second[j]) <100) count++;
                }
                
                if(count>=3) 
                {
                    ans.push_back(val.first);
                    break;
                }
            }
        }
        return ans;
    }
};
