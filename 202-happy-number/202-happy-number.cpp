class Solution {
public:
    bool isHappy(int d) {
      map<int,int>mp;
      while(mp.find(d)==mp.end()){
         mp[d]++;
          int x=0;
        while(d){
             x+=pow(d%10,2);
            d=d/10;
        }
          if(x==1) return true;
          d=x;
          
    }
        return false;
        
    }
    
};