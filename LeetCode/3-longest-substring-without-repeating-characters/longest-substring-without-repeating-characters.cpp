class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> temp;
        int maxLength=0;

        for(int i=0;i<s.length();i++) {

            auto it=find(temp.begin(),temp.end(),s[i]);

            if(it!=temp.end()) {
                temp.erase(temp.begin(),it+1);   
            }

            temp.push_back(s[i]);
            maxLength=max(maxLength,(int)temp.size());
            
        }

        return maxLength;
    }
};