class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-minPrice);
            minPrice = min(prices[i],minPrice);
        }
        return maxprof;
    }
};