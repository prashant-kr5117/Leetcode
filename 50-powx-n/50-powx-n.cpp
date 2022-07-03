class Solution {
public:
    double myPow(double x, long n) {
         double r;
        if(n==0){
            return 1;
        }
       //   if(n==1){
       //      return x;
       //  }
       //   if(x==1){
       //      return 1;
       //  }
       //  if(n<0){
       // x=1/x;
       // n=-n; 
       //  }
       //  double m = myPow(x,(int)(n-1));
       
        else{
             r=pow(x,n);
        }
        return r;
        
    }
};
