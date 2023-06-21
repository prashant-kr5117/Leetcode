class Solution {
public:
    int candy(vector<int>& rat) {
     
        int n=size(rat);
        
        vector<int> left(n,1);
        vector<int> right(n,1);
        
        for(int i=1;i<n;i++){
         if(rat[i]>rat[i-1]) left[i]=left[i-1]+1;
        }
        
        for(int i=n-2;i>=0;i--){
                if(rat[i]>rat[i+1]) right[i]=right[i+1]+1;
        }
        
        int i=0;
        int sum=0;
        while(i<n){
            sum+=max(left[i],right[i]);
            i++;
        }
        return sum;
    }
};