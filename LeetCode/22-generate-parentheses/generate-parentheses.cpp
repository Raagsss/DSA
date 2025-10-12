class Solution {
private:
    void solve(int n,int open,int close,string curr,vector<string>& res) {
        if(curr.size()==2*n) {
            return res.push_back(curr);
        }

        if(open<n) {
            solve(n,open+1,close,curr+"(",res);
        }

        if(close<open) {
            solve(n,open,close+1,curr+")",res);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(n,0,0,"",res);

        return res;
    }
};