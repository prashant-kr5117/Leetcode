class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        // int n=size(s),i=0;
        // if(n%2==1) return false;
        
        for(auto c:s){
        if(st.empty()) st.push(c);
        else if((st.top()=='(' && c==')') || (st.top()=='[' && c==']') || (st.top()=='{' && c=='}')) st.pop() ;
          else st.push(c);
        }
        if(st.empty()) return true;
        return false;
    }
};