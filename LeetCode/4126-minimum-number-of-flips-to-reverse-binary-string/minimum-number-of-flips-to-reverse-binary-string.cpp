class Solution {
public:
    int minimumFlips(int n) {
        vector<int> bin;
        while(n>0) {
            bin.push_back(n%2);
            n/=2;
        }

        vector<int> rev = bin;
        reverse(bin.begin(),bin.end());

        int i=0;
        int count=0;

        while(i<bin.size()) {
            if(bin[i]!=rev[i]) {
                count++;
            }
            i++;
        }

        return count;
    }
};