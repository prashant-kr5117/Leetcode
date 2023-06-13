class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n <= 2) {
        return n;
    }
    
    int index = 2; // Index to keep track of the current position to insert the next unique element
    
    for (int i = 2; i < n; i++) {
        if (nums[i] != nums[index - 2]) {
            nums[index] = nums[i];
            index++;
        }
    }
    
    return index;
}

};