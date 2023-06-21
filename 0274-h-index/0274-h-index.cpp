class Solution {
public:
    int hIndex(vector<int>& cit) {
     int n=size(cit);
        sort(cit.begin(),cit.end());
       // 0 1 3 5 6 
        int index=0;
        for(int i=n-1;i>=0;i--){
            if(cit[i]>index){
                index ++;
            }
           else  break;
        }
        return index;
    }
};