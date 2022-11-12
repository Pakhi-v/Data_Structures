class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int profit = 0;
        int low = prices[0], high = prices[0];
        for(int i =0 ;i<prices.size();i++){
            if(prices[i]<low){
                profit = max(profit, high-low);
                low = prices[i];
                high = prices[i];
            }else{
                high = max(high,prices[i]);
            }
        }
       profit = max(profit, high - low);
       return profit; 
    }
};