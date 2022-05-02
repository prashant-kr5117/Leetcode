class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int maxP = 0,minPrice = prices[0];
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]>minPrice) maxP = max(maxP,prices[i]-minPrice);
            else minPrice = min(minPrice,prices[i]);
        }
        return maxP;
    }
};