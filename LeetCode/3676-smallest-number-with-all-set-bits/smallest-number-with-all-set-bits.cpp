class Solution {
public:
    int smallestNumber(int n) {
        int i=1;
        int sum=0;
        while(i<=n) {
            sum+=i;
            i*=2;
        }

        return sum;
    }
};