class Solution {
public:
    bool isAnagram(string s, string t) {
     
        if(s.length()!=t.length()) return false;
        
        int arr[26]={0};
        int i=0;
        while(i<s.length()){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
            
            i++;
        }
        int j=0;
        while(j<26){
            if(arr[j]!=0) return false;
            j++;
        }
        return true;
    }
};