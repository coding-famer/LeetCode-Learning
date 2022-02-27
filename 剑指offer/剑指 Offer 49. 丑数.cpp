#include<vector>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0,j=0,k=0;
        vector<int> u(n);
        u[0]=1;
        int p=1;
        while(p<n)
        {
            u[p]=min(min(u[i]*2,u[j]*3),u[k]*5);
            if(u[i]*2==u[p]) i++;
            if(u[j]*3==u[p]) j++;
            if(u[k]*5==u[p]) k++;
            p++;
        }
        return u[n-1];
    }
};