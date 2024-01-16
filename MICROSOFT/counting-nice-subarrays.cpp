class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count=0,ans=0,odd=0;
        int i=0,j=0;
        while(i<nums.size())
        {
            if(nums[i]%2) 
            {
                odd++;
                if(odd>=k)
                {
                   count=1;
                   while(nums[j++]%2==0)
                   {
                    count++;
                    //j++;
                   }

                   ans+=count;
                }
            }
            else if(odd>=k) ans+=count;

            i++;
        }

        return ans;
    }
};
