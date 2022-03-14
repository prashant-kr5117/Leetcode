class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> bums;
        for(int i=0;i<nums.size();i++){
            bums.insert(nums[i]);
        }
        if(bums.size()!=nums.size()) return true;
        
        return false;
    }
};