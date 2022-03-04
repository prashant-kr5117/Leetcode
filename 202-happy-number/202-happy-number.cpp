class Solution {
public:
    bool isHappy(int d) {
        int counter=6;
         int x;
      while(counter){
         x=0;
        while(d){
             x+=pow(d%10,2);
            d=d/10;
        }
          if(x==1) return true;
          d=x;
          counter--;
    }
        return false;
        
    }
    
};