class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) {
            return s;
        }

        int row=0;
        int dir=1; // 1 for down and -1 for up

        vector<string> ans(numRows);
        for(char c:s) {
            ans[row]+=c;
            if(row==0) dir=1;
            else if(row==numRows-1) dir=-1;

            row+=dir;
        }

        string result="";
        for(string a:ans) {
            result+=a;
        }

        return result;
    }
};