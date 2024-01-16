
//RABIN KARP METHOD RECOMMENDED//
class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        unordered_set<vector<int>> s;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int el=0;
            vector<int> temp;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]%p==0) el++;
                if(el>k) break;
                temp.push_back(nums[j]);
                s.insert(temp);
            }
        }

        return s.size();
    }
};
