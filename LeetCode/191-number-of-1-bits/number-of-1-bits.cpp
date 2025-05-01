class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        vector<int> ans;

        while(n>0) {
            ans.push_back(n%2);
            n/=2;
        }

        for(int i=0;i<ans.size();i++) {
            if(ans[i]==1) {
                count++;
            }
        }
        return count;
    }
};