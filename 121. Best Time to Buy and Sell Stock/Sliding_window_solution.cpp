class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0 ; int r = 1;
        int maxprofit = 0;
        int n = prices.size();
        while(r < n){
            if(prices[l] > prices[r])
                l = r;
            else{
                int profit = prices[r] - prices[l];
                maxprofit = max(maxprofit, profit);
            }
            r++;
        }
        return maxprofit;
    }
};
