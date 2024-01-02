class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        int l=1,h=INT_MAX;
        int ans=INT_MAX;

        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int nd1=mid-mid/divisor1;
            int nd2=mid-mid/divisor2;
            long long lcm=((long long)divisor1*divisor2)/__gcd(divisor1,divisor2);
            int nb=mid-mid/lcm;

            if(nd1>=uniqueCnt1 && nd2>=uniqueCnt2 && nb>=(uniqueCnt1+uniqueCnt2))
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }

        return ans;
    }
};
