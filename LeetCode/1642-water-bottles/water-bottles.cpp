class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int del=numBottles;

        while(del>=numExchange) {
            int newBottles=del/numExchange;
            ans+=newBottles;
            del=del%numExchange+newBottles;
        } 
        
        return ans;

        
    }
};