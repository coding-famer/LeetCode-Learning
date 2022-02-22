#include<stdlib.h>
using namespace std;
class Solution {
public:
    int divide(int a, int b) {
         if(a==INT_MIN&&b==-1)return INT_MAX;
        int sign=(a>0)^(b>0)?-1:1;
        unsigned int _a=abs(a),_b=abs(b);
        unsigned int res=0;
        // 使用二进制减法,来算a/b的商
        for(int i=31;i>=0;i--)
        {
            // 若_a的第i位大于等于_b，则表示_a大于等于_b的2^i倍
            if((_a>>i)>=_b){
                _a-=(_b<<i);// a减少_b的2^i倍
                res+=(1<<i);// res加上2^i个b
            }
        }
        return sign>0?res:-res;
    }
};