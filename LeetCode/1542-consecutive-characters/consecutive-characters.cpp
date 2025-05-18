class Solution {
public:
    int maxPower(string s) {
        int count=1;
        int maxL=1;
        for(int i=1;i<s.length();i++) {
            if(s[i]==s[i-1]) {
                count++;
            }
            else {
                count=1;
            }
            maxL=max(count,maxL);
        }
        return maxL;
    }
};