class Solution {
public:
    bool isPalindrome(int x) {
        // long long ans=0;
        if(x<0) {
            return false;
        }    
        // int temp=x;
        // while(temp>0) {
        //     ans=ans*10+(temp%10);
        //     temp=temp/10;
        // }

        // return ans==x;

        string p=to_string(x);
        string rev="";
        // reverse(rev.begin(),rev.end());
        for(int i=p.length()-1;i>=0;i--) {
            rev+=p[i];
        }

        return rev==p;
        
    }
};