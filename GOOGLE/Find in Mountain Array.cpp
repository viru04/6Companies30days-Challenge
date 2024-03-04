/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int low=0,high=mountainArr.length()-1;

        while(low<high)
        {
            int mid=(low+high)/2;

            if(mountainArr.get(mid)>mountainArr.get(mid+1)) high=mid;
            else low=mid+1;
        }
       
       int pindex=high;

       int l=0,h=pindex,mini=INT_MAX;

       while(l<=h)
       {
           int mid=(l+h)/2;

           if(mountainArr.get(mid)==target)
           {
               mini=min(mini,mid);
               break;
           }
           else if(mountainArr.get(mid)>target)
           {
               h=mid-1;
           }
           else
           l=mid+1;
           
       }
       
       l=pindex+1,h=mountainArr.length()-1;
       while(l<=h)
       {
           int mid=(l+h)/2;

           if(mountainArr.get(mid)==target)
           {
               mini=min(mini,mid);
               break;
           }
           else if(mountainArr.get(mid)<target)
           {
               h=mid-1;
           }
           else
           l=mid+1;
           
       }

       return mini==INT_MAX ? -1 :mini ;

    }
};
