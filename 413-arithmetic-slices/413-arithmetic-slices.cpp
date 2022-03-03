class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        vector<int> bums(nums.size());
        
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
               bums[i]= bums[i-1]+1;  
            }
        }
        return accumulate(begin(bums),end(bums),0);
    }
};