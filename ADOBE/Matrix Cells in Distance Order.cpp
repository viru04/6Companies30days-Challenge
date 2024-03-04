class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int x, int y) {
        map<int,vector<pair<int,int>>> m;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                m[abs(i-x)+abs(j-y)].push_back({i,j});
            }
        }

        vector<vector<int>> ans;
        for(auto &val:m)
        {
            for(auto &p:val.second)
            {
                vector<int> temp;
                temp.push_back(p.first);
                temp.push_back(p.second);
                ans.push_back(temp);
            }   
        }

        return ans;
    }
};
