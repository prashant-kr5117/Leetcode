class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int mR=0;
        for(int i=0;i<size(nums);i++){
            if(i>mR) return false;
            mR=max(mR,i+nums[i]);
        }
        return true;
    }
};