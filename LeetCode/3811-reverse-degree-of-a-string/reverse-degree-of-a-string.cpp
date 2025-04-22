class Solution {
public:
    int reverseDegree(string s) {
        int total=0;
        for(size_t i=0;i<s.length();i++) {
            char c=tolower(s[i]);
            if(c>='a'&& c<='z') {
                total+=(i + 1)*(26-(c-'a'));
            }
        }
        return total;
    }
};