class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i<k) sum+=nums[i];
            else{
                res=max(res,sum);
                sum+=nums[i]-nums[i-k];
            }
        }
    return max(sum,res)/k;
    // return res/k;
    }
};