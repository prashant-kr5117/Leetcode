class Solution {
public:
    int countSubstrings(string s) {
        
        vector<vector<bool>> dp(s.size(),vector<bool>(s.size(),false));
        
        int count=0;
        for(int g=0;g<s.size();g++){
            for(int i=0,j=g;j<s.size();i++,j++){
                if(g==0) dp[i][j]=true;
                else if(g==1) {
                    if(s[i]==s[j]) dp[i][j]= true;
                }
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]==true) dp[i][j]= true;
                }
                if(dp[i][j]==true)  count++;
            }
        }
        return count;
    }
};;