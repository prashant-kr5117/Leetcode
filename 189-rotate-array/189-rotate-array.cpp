class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> ans;
      
        int j=nums.size()-k;
        if(j<0) j=-j;
        for(int i=j;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<j;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
    }
};