class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        vector<string> words;
        while(str >> word) {
            words.push_back(word);
        }

        string ans;
        int n=words.size();
        for(int i=n-1;i>=0;i--) {
            ans+=words[i];
            if (i!=0) ans+=" ";
        }

        return ans;
    }
};