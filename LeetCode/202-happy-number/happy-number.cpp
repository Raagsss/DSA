class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && !seen.count(n)) {
            seen.insert(n);
            int result=0;
            while(n>0) {
                int digit=n%10;
                result+=digit*digit;
                n/=10;
            }
            n=result;
        }

        return n==1;
    }
};