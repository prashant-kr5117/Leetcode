class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int curGain=0,totalGain=0,answer=0;
     
        for(int i=0;i<size(gas);++i){
            totalGain+=gas[i]-cost[i];
            curGain+=gas[i]-cost[i];
            
            if(curGain<0) {
                answer=i+1;
                curGain=0;
            }
        }
        return totalGain>=0 ? answer:-1;
    }
};