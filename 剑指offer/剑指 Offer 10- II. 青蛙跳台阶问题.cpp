class Solution {
public:
    int numWays(int n) {
        int a = 1;
        int b = 1;
       for(;n>1;n--)
       {
           int k = (a+b)%1000000007;
           a = b;
           b = k;
       }
       return b;
    }
};