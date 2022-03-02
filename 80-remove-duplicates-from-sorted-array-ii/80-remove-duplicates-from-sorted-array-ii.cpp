class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size()<3) return nums.size();
        int i =1;
        while (i<nums.size()){
            if(nums[i-1] == nums[i]){
                if(i == nums.size()-1) return nums.size();
                if(nums[i+1] == nums[i]) {nums.erase(nums.begin()+i);continue;}    
            }
            i++;
        }
        return nums.size();
    }
};