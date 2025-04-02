class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxCandies=INT_MIN;
        vector<bool> ans(n);
        for(int i=0;i<n;i++) {
            maxCandies=max(maxCandies,candies[i]);
        }

        for(int i=0;i<n;i++) {
            ans[i]=(candies[i]+extraCandies >= maxCandies);
        }
        return ans;
    }
};