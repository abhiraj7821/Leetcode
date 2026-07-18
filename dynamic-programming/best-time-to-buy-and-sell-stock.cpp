class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // REMEMBER THE PAST
        int min_buy=prices[0];
        int max_profit = INT_MIN;
        for(int i=0;i<prices.size();i++){
            int max_sell=prices[i];
            if(prices[i]<min_buy){
                min_buy = prices[i];
            }
            else if(max_profit < (max_sell-min_buy)){
                max_profit = (max_sell-min_buy);
            }
        }
        return max_profit;
    }
};