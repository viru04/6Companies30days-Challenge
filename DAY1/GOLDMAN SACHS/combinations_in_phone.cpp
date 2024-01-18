class Solution {
public:
void solve(int index,string digits,string temp,string m[],vector<string> &ans)
{
    if(index>=digits.size())
    {
        ans.push_back(temp);
        return ;
    }

    int val=digits[index]-'0';
    string s=m[val];

    for(int i=0;i<s.size();i++)
    {
        temp.push_back(s[i]);
        solve(index+1,digits,temp,m,ans);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ans;
        string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,"",m,ans);

        return ans;
    }
};
