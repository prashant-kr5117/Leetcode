class Solution {
public:
    int romanToInt(string s) {
             map<char, int> m{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        map<char,int>::iterator itr;
        int sum=0,p=0;
        int i=s.size()-1;
        while(i>=0){
            itr=m.find(s[i]);
            if(itr->second>=p){
                sum+=itr->second;
                p=itr->second;
            }
            else{
                sum-=itr->second;
            }
            i--;
        }
        return sum;
    }
};