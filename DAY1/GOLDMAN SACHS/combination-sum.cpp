class Solution {
    void sum(int k,int n,vector<int> &temp,vector<vector<int>> &ans,vector<int> &ch,int index)
    {
        if(index>=9)
        {
            if(n==0 && temp.size()==k)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(n<=0 || temp.size()>=k)
        {
            if(n==0 && temp.size()==k)
            {
                ans.push_back(temp);
            }
            return ;
        }
        temp.push_back(ch[index]);
        n=n-ch[index];
        sum(k,n,temp,ans,ch,index+1);
        temp.pop_back();
        n=n+ch[index];
        sum(k,n,temp,ans,ch,index+1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index=0;
        vector<int> ch={1,2,3,4,5,6,7,8,9};
        sum(k,n,temp,ans,ch,index);
        return ans;
    }
};
