class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // auto i= find(nums.begin(),nums.end(),target);
        // if(i==nums.end()) return -1;
        //  return i-nums.begin();
    int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)>>1;
        if(nums[mid]==target) return mid;
        if(nums[l]<=nums[mid]){
            if(nums[l]<=target && nums[mid]>=target) h=mid-1;
            else l=mid+1;
        }
         else{
                if(nums[mid]<=target && nums[h]>=target) l=mid+1;
                 else h=mid-1;
            }
            
    }
        return -1;
    }
};