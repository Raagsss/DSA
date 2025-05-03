class Solution {
public:
    int findComplement(int num) {
        string result="";
        int original=num;
        while(num>0) {
            if(num%2==1) {
                result.push_back('0');
            }else {
                result.push_back('1');
            }
            num/=2;
        }
        reverse(result.begin(),result.end());

        int complement=0;
        for(char ch:result) {
            complement=complement*2+(ch-'0');
        }

        return complement;
    }
};