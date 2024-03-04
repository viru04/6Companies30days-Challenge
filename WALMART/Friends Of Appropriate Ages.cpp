class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        sort(ages.begin(),ages.end());

        int count=0;
        for(int i=0;i<ages.size();i++)
        {
            int val=ages[i]/2+7;
            if(val>=ages[i]) continue;

            auto it1=upper_bound(ages.begin(),ages.end(),val)-ages.begin();
            auto it2=upper_bound(ages.begin(),ages.end(),ages[i])-ages.begin();

            it2--;
            if(it2>=it1) count+=(it2-it1);
        }

        return count;
    }
};
