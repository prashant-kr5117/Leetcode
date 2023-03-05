class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> um;
    
        
        for(auto i:s){
            string temp=i;
            sort(i.begin(),i.end());
            um[i].push_back(temp);
        }
        
        for(auto i:um){
            ans.push_back(i.second);
        }
        return ans;
    }
};