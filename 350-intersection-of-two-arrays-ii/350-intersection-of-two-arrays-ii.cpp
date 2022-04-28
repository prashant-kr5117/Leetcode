class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
      unordered_map <int,int> ma;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            ma[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(--ma[nums2[j]]>=0) res.push_back(nums2[j]);
        }
        return res;
    }
};