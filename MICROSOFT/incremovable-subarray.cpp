class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                vector<int> temp(nums.begin(),nums.end());
                temp.erase(temp.begin()+i,temp.begin()+j+1);
                
                bool flag=1;
                if(!temp.empty())
                {
                    for(int k=0;k<temp.size()-1;k++)
                    {
                        if(temp[k+1]<=temp[k])
                        {
                            flag=0;
                            break;
                        }
                    }
                    
                    if(flag) count++;
                }
                
                
            }
        }
        
        return count+1;
    }
};
