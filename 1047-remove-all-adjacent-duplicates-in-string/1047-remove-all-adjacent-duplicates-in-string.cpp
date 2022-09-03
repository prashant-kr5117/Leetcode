class Solution {
public:
    string removeDuplicates(string s) {
        if(s.empty()) return 0;
        int n= s.size(),i=0;
         stack<char>res;
//         while(!s.empty()){
//         //     res.push(s.top());
//         //     s.pop();
        
//         if(s.top()!=res.top) res.push(s.top());
//     }
        
        while(i<n){
            if(res.empty()||res.top()!=s[i]) res.push(s[i]);
            else res.pop();
            
            i++;
        }
        
        string ans="";
        while(!res.empty()){
            char ele = res.top();
            res.pop();
            
            ans+=ele;
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};