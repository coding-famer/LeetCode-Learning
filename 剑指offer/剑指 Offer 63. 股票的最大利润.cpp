#include<vector>
#include<limits.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX,max=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<low) low=prices[i];
            if(prices[i]-low>max) max=prices[i]-low;
        }
        return max;
    }
};