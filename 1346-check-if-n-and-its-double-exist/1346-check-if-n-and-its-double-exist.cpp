class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        for(int i=a.size()-1;i>=0;i--){
            for(int j=0;j<a.size();j++){
                if(a[i]==2*a[j] && i!=j) return true;
                }
        }
       return false;
    }
     
};