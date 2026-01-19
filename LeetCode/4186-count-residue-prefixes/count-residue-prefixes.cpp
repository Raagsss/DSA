class Solution {
public:
    int residuePrefixes(string s) {
        vector<int> freq(26,0);
        int count=0;
        int distinct=0;

        for(int i=0;i<s.length();i++) {
            if(freq[s[i]-'a']==0) {
                distinct++;
            }
            freq[s[i]-'a']++;

            int length=i+1;
            if(distinct==length%3) {
                count++;
            }
        }
        return count;
    }
};