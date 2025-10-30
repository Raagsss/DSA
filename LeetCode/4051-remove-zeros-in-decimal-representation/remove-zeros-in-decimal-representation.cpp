class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        long long multiplier=1;
        while(n>0) {
            long long p=n%10;
            if(p!=0) {
                ans=ans+p*multiplier;
                multiplier*=10;
            }
            n/=10;
        }

        return ans;
    }
};