bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    return a.second > b.second;
}

class Solution {
public:
    string frequencySort(string s) {
    map<char,int> f;

    for(auto val:s)
    {
          f[val]++;
    } 
      string ans;
      vector<pair<char, int> > A;
      for (auto& it : f) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(),cmp);
    for(auto val:A)
    {
          for(int i=0;i<val.second;i++)
          ans+=val.first;
    }

      return ans;
    }
};
