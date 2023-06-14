class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,maxElement=0;
        for(auto i:nums){
            if(count==0) maxElement=i;
            if(i==maxElement) count++;
            else count--;
        }
        return maxElement;
    }
};