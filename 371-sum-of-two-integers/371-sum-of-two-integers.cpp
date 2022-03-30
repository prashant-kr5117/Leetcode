class Solution {
public:
    int getSum(int a, int b) {
        unsigned xo = a^b;
        unsigned carry = a&b;
        if(carry==0) return xo;
        else return getSum(xo,carry<<1);
    }
};