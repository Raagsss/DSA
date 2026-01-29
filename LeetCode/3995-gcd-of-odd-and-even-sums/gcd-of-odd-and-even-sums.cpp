class Solution {
public:
    int gcdCalculator(int a,int b) {
        while(b!=0) {
            a%=b;
            swap(a,b);
        }

        return a;
    }

    int gcdOfOddEvenSums(int n) {
        vector<int> count1;
        vector<int> count2;

        long long sumOdd=0;
        long long sumEven=0;
        int i=1;

        while(count1.size()<n && count2.size()<n) {
            if(i%2==0) {
                count1.push_back(i);
                i++;
            }else{
                count2.push_back(i);
                i++;
            }
        }

        for(auto it:count1) sumEven+=it;
        for(auto it:count2) sumOdd+=it;

        return gcdCalculator(sumOdd,sumEven);
    }
};