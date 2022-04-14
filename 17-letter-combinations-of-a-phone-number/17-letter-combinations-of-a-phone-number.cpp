class Solution {
public:
            
vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;  
     
    vector<string> letterCombinations(string digits) {
    if(digits == "") return ans;
        helper(digits,0,"");
        return ans;
    }
        void helper(string &digits , int i,string comb){
            if(i==size(digits)) ans.push_back(move(comb));
            else{
                for(auto c :mappings[digits[i]-'2']){
                    helper(digits,i+1,comb+c);
                }
            }
        }        
};