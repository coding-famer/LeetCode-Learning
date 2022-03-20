#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> q;
        double sum=0;
        int count=0;
        for(int n:nums)
        {
            sum+=n;
            q.push(n);
        }
        double target=sum/2;
        while(sum>target)
        {
            double tmp=q.top();
            q.pop();
            q.push(tmp/2);
            count++;
            sum-=tmp/2;
        }
        return count;
    }
};
