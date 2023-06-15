class Solution {
public:
    int jump(vector<int>& nums) {
        
        for(int i=1;i<size(nums);i++) nums[i]=max(nums[i-1],nums[i]+i);
        
        int minJ=0,i;
        while(i<size(nums)-1){
            minJ++;
            i=nums[i];
        }
        return minJ;
    }
};