class Solution {
public:
    
    //function to find common prfeix between two string 
    string LCP(string x,string y){
        int i=0,j=0;
        while(i<x.length()&& j<y.length()){
            if(x[i]!=y[j]) break;
            i++;
            j++;
            
        } 
         return x.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0]; //storing 1st element 
        
        //applying a loop to iterate through strings 
        for(string s :strs){
            prefix = LCP(prefix,s);
        }
        return prefix;
    }
};