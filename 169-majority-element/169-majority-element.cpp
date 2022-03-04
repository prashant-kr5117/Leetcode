class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count=0;
        int candidate;  //  it will contain the final majority occuring element that appears more than ⌊n / 2⌋ times.
        
        for(int i=0;i<nums.size();i++){
            if(count==0) candidate = nums[i];
            if(candidate == nums[i]) count++;
            else count--;
            
        }
        return candidate;
    }
};

// the best way to understand is dry run this code on your notebook .