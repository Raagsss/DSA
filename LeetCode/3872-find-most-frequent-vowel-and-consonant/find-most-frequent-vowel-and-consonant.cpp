class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vw;
        unordered_map<char,int> cn;
        string vowels = "aeiouAEIOU";

        for(char it:s) {
            if(isalpha(it)) {
                if(vowels.find(it)!=string::npos) {
                    vw[it]++;
                }else {
                    cn[it]++;
                }
            }
        }

        int maxVowel=0;
        int maxConsonant=0;

        for(auto it:vw) {
            maxVowel=max(maxVowel,it.second);
        }

        for(auto it:cn) {
            maxConsonant=max(maxConsonant,it.second);
        }

        return maxVowel+maxConsonant;
    }
};