class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxPrice=0;

        for(int i=0;i<prices.size();i++) {
            if(prices[i]<minPrice) {
                minPrice=prices[i];
            }
            int price=prices[i]-minPrice;
            if(price>maxPrice) {
                maxPrice=price;
            }
        }
        return maxPrice;
    }
};