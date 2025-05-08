class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        for(int i=0;i<candyType.size();i++) {
            mp[candyType[i]]++;
        }
        int m=candyType.size()/2;

        int a=mp.size();
        return min(a,m);
    }
};