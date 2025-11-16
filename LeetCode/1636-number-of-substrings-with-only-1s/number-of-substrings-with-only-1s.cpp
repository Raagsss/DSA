class Solution {
public:
    int numSub(string s) {
        const long long MOD = 1'000'000'007;
        long long length=0;
        long long ans=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='1') {
                length++;
            }else {
                ans = (ans + (length % MOD) * ((length + 1) % MOD) % MOD * 500000004 % MOD) % MOD;
                length=0;
            }
        }

        ans = (ans + (length % MOD) * ((length + 1) % MOD) % MOD * 500000004 % MOD) % MOD;

        return ans;
    }
};