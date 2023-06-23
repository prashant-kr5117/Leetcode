class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
            int n=size(str);
        int r=INT_MAX;
        for(int i=1;i<n;i++){
        
            int j=0,c=0;
            while(j<str[i-1].size() && j<str[i].size()){
                if(str[i-1][j]==str[i][j]) c++;
                else break;
                
                j++;
            }
            r=min(r,c);
        }
        return str[0].substr(0,r);
    }
};