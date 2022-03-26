class Solution {
public:
    
    int binarySearch(vector<int> n,int a,int b,int tar){
        if(a>b)return -1;
        int mid=a+(b-a)/2;
        if(n[mid]==tar) return mid;
        if(n[mid]>tar) return binarySearch(n, a,mid-1, tar);
        return binarySearch(n, mid+1,b, tar);
       
}
    
    int search(vector<int>& nums, int target) {
        int a = 0,b=nums.size()-1;
        return binarySearch(nums,a,b,target);
    }
};