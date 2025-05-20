class Solution {
public:
    int countSegments(string s) {
        istringstream iss(s);
        string word;
        vector<string> words;

        while(iss>>word) {
            words.push_back(word);
        }

        return words.size();
    }
};