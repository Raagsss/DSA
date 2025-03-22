class Solution {
public:
    void reverseString(vector<char>& s) {
        // int n=s.size();   //neeche dekho
        // int p=0;
        // vector<char> r(n);
        // for(int i=n-1;i>=0;i--) {
        //     r[p]=s[i];
        //     p++;
        // }
        // s=r;
        // int n=s.size();
        // int start=0;
        // int end=n-1;
        // while(start<=end) {
        //     swap(s[start],s[end]);
        //     start++;
        //     end--;
        // }

        stack<char> st;
        vector<char> ans;
        for(int i=0;i<s.size();i++) {
            st.push(s[i]);
        }

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        s=ans;
    }
};