class Solution {
public:
    bool isPrime(int n) {
        if(n<=1) return false;

        for(int i=2;i*i<=n;i++) {
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        // unordered_map<int,int> mp;
        vector<int> mp(101,0);

        for(int &it:nums) {
            mp[it]++;
        }

        for(auto &it:mp) {
            if(isPrime(it)) {
                return true;
            }
        }

        return false;
    }
};