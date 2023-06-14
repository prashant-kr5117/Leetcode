class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int lv=INT_MAX;//leastValue
        int pist=0;//profit if sale today
        int mp=0;//max profit
        for(int i=0;i<size(prices);i++){
            
            if(prices[i]<lv) lv=prices[i];
            pist=prices[i]-lv;
            if(mp<pist) mp=pist;
            
        }
        return mp;
    }
};