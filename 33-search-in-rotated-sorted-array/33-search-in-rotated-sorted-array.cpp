class Solution {
public:
    int search(vector<int>& nums, int target) {
        // vector<int> res(target.begin(),target.end());
        
//         target=target%size(nums);
        
//         for(int i=target+1;i<nums.size();i++){
//             res.push_back(nums[i]);
//         }
        
//         for(int i=0;i<=target;i++){
//             res.push_back(nums[i]);
//         }
        
        auto i= find(nums.begin(),nums.end(),target);
        if(i==nums.end()) return -1;
         return i-nums.begin();
        
    }
};