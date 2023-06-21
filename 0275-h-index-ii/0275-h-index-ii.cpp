class Solution {
public:
    int hIndex(vector<int>& cit) {
        
        int n=size(cit);
        int index=0;
        for(int i= n-1;i>=0;i--){
            if(cit[i]>index) index ++;
            else break;
        }
        return index;
    }
};