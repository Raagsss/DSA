class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vowels;
        unordered_map<char,int> consonant;

        for(auto it:s) {
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u') {
                vowels[it]++;
            }else {
                consonant[it]++;
            }
        }
        
        int maxVowel=0;
        for(auto it:vowels) {
            if(it.second>maxVowel) {
                maxVowel=it.second;
            }
        }

        int maxConst=0;
        for(auto it:consonant) {
            if(it.second>maxConst) {
                maxConst=it.second;
            }
        }

        return maxConst+maxVowel;
    }
};