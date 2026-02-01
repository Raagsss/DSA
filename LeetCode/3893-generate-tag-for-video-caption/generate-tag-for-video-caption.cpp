class Solution {
public:
    string generateTag(string caption) {
        string result="#";
        string word="";
        bool firstWord=true;

        for(char it:caption) {
            if(isalpha(it)) {
                word+=tolower(it);
            }else if(!word.empty()) {
                if(firstWord) {
                    result+=word;
                    firstWord=false;
                }else {
                    word[0]=toupper(word[0]);
                    result+=word;
                }
                word.clear();
            }
        }

        if(!word.empty()) {
            if(firstWord) {
                result+=word;
            }else {
                word[0]=toupper(word[0]);
                result+=word;
            }
        }

        return result.substr(0,100);
    }
};