class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies=INT_MIN;
        vector<bool> ans;
        int n=candies.size();
        for(int i=0;i<n;i++) {
            if(maxCandies<candies[i]) {
                maxCandies=candies[i];
            }
        }

        for(int i=0;i<n;i++) {
            int sum=candies[i]+extraCandies;
            if(sum>=maxCandies) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};