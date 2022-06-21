class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int> f(20005);
         int dp[20005];
        for(auto num :nums){    
         f[num]++;
        }
        
        dp[1] = f[1];
        dp[2] = max(dp[1],f[2]*2);
        
        for(int i=3;i<=maxi;i++){
            dp[i]=max(dp[i-1],dp[i-2]+f[i]*i);
        }
        return dp[maxi];
    }
};