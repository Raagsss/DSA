class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;

        while(i>=0 || j>=0 || carry) {
            char A=(i>=0)?a[i]:'0';
            char B=(j>=0)?b[j]:'0'; 
            if(A=='1' && B=='1') {
                ans+=(carry==1) ? '1' : '0';
                carry=1;
            }
            else if(A=='1' || B=='1') {
                ans+=(carry==1) ? '0' : '1';
            }
            else {
                ans+=(carry==1) ? '1' : '0';
                carry=0;
            }
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};