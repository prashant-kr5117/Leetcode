class Solution {
public:
    
    int bs(vector<int>& ar,int l,int r,int t ){
    
        if(l>r) return -1;
    int mid=l+(r-l)/2;
        if(ar[mid]==t) return mid;
        if(ar[mid]<t) return bs(ar,mid+1,r,t);
        return bs(ar,l,mid-1,t);

    }
    
    int search(vector<int>& nums, int target) {
        
       return bs(nums,0,size(nums)-1,target);
    }
};