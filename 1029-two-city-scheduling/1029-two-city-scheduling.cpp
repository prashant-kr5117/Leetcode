class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int minsum=0;
        vector<int> dif;
        for(int i=0;i<costs.size();i++){
            minsum += costs[i][0];
            dif.push_back(costs[i][1]-costs[i][0]);
        }
        sort(dif.begin(),dif.end());
         for(int i=0;i<costs.size()/2;i++){
             minsum+=dif[i];
         }
        return minsum;
    }
};