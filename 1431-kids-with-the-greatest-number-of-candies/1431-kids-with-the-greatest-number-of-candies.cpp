class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int eC) {
        
       int ma =  *max_element(can.begin(), can.end());
     vector<bool> res;
        for(int i=0;i<can.size();i++){
            if(can[i]+eC >= ma) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};