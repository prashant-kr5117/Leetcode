class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = size(nums);
        if(n<2) return n? nums[0]:0;
        
        return max(robber(nums,0,n-2) ,robber(nums,1,n-1));
        
    }
    
private:
    int robber(vector<int> nums , int l,int r){
        int a=0,b=0;
        for(int i=l;i<=r;i++){
            if(i%2==0){
                a = max(a+nums[i],b);
            }
            else{
                b = max(b+nums[i],a);
            }
        }
        return max(a,b);
    }
};