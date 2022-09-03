class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> vec;
        
        for(auto c:s){
            if(vec.size()==0 || vec.back().first!=c ){
                vec.push_back({c,1});
            }
            else{
                vec.back().second++;
            }
            if(vec.back().second==k) vec.pop_back();
        }
        string res="";
        for(auto x :vec){
            res.append(x.second,x.first);
        }
        return res;
    }
};