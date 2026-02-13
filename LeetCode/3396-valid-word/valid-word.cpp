class Solution {
public:
    bool isValid(string word) {
        string w;
        for(auto it:word) {
            w.push_back(tolower(it));
        }

        if(w.length()<3) return false;

        bool hasVowel=false;
        bool hasConst=false;
        for(auto it:w) {
            if(!isalnum(it)) return false;

            if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') {
                hasVowel=true;
            }else if(isalpha(it)) {
                hasConst=true;
            }
        }

        return hasVowel && hasConst;

        return false;
    }
};