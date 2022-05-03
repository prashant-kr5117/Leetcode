class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int p=0,n=1;
        for(auto i:nums){
            if(i>0){
                ans[p]=i;
                p+=2;
            }
            if(i<0){
                ans[n]=i;
                n+=2;
            }
        }
        return ans;
    }
};