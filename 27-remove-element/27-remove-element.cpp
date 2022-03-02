class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0,j=0;
        int temp;
        while(i<nums.size()){
            if(nums[i]==val) i++;
            else{
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                ++i;
                ++j;
            }
        }
        return j;
    }
};