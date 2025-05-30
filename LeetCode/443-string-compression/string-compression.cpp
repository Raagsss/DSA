class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size();
        int ansIndex=0;

        while(i<n) {
            int j=i+1;
            while(j<n && chars[i]==chars[j]) {
                j++;
            }

            chars[ansIndex++]=chars[i];

            int count=j-i;

            if(count>1) {
                string ans=to_string(count);
                for(char it:ans) {
                    chars[ansIndex++]=it;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};