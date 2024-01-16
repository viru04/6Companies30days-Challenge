class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans(img.size(),vector<int>(img[0].size(),0));
        vector<int> d{-1,0,1};
        for(int i=0;i<img.size();i++)
        {
            for(int j=0;j<img[0].size();j++)
            {
                int sum=0,count=0;
                for(int k=0;k<3;k++)
                {
                    for(int m=0;m<3;m++)
                    {
                        int x=i+d[k];
                        int y=j+d[m];

                        if(x>=0 && x<img.size() && y>=0 && y<img[0].size())
                        {
                            sum+=img[x][y];
                            count++;
                        }
                    }
                }

                ans[i][j]=sum/count;
            }
        }

        return ans;
    }
};
