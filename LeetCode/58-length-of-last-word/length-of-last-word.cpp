class Solution {
public:
    int lengthOfLastWord(string s) {
        // int length=0;
        // int i=s.length()-1;
        // while (i>=0 && s[i]==' ') 
        //     i--;

        // while (i>=0 && s[i]!=' ') {
        //     length++;
        //     i--;
        // }
        // return length;

        stringstream ss(s);
        string word,lastword;
        while(ss >> word) {
            lastword=word;
        }
        return lastword.length();
    }
};