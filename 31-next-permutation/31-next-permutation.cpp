class Solution {
public:
    
//     brute force solution
//     void nextPermutation(vector<int>& nums) {
//        int a = nums[1]*10+nums[2];
//         int b =  nums[2]*10+nums[1];
//         if(a<b) {
//             int temp = nums[1];
//             nums[1]=nums[2];
//             nums[2]=temp;
//         }
//         else if(nums[0]!=*max_element(nums.begin(), nums.end()) && a>b){
//             int temp =nums[2];
//             nums[2]=nums[1];
//             nums[1]=nums[0];
//             nums[0]= temp;
//         }
//         else {
//             int p =nums[0];
//             nums[0]=nums[2];
//             nums[2]=p;
//         }
      
//     }
    
    void nextPermutation(vector<int>& nums){
        int i = nums.size()-2;
        
        while(i>=0 && nums[i]>=nums[i+1]) i--;
        
        if(i<0) reverse(nums.begin(),nums.end());
        else{
            int j=nums.size()-1;
            while(j>=0 && nums[j]<=nums[i])j--;
            
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};