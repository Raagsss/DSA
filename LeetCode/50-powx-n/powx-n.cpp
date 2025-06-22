class Solution {
public:
    double powers(double x,long long n) {
        if(n==0) {
            return 1;
        }

        double ans=powers(x,n/2);

        if(n%2==0) {
            return ans*ans;
        }else {
            return x*ans*ans;
        }
    }

    double myPow(double x, int n) {
        long long N=n;
        if(N<0) {
            return 1.0/powers(x,-N);
        }
        return powers(x,N);
    }
};