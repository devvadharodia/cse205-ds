class Solution {
    public int buyChoco(int[] prices, int money) {
        for(int i=0;i<prices.length;i++){
            for(int j=i;j<prices.length;j++){
                int temp = prices[i];
                if(prices[i]>prices[j]){
                    temp = prices[j];
                    prices[j] = prices[i];
                    prices[i] = temp;
                }
            }
        }
        int x = money-prices[0]-prices[1];
            if(x<0){
                return money;
            }
        return x;
    }
}