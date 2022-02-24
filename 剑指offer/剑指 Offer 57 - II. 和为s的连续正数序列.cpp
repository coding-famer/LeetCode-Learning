#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ret;
       int i=1,j=2;
       while(i<j&&j<target/2+2)
       {
           int x = (i+j)*(j-i+1)/2;
           if(x<target) j++;
           else if(x>target) i++;
           else
           {
                vector<int> tmp;
                for(int k=i;k<=j;k++)
                    tmp.push_back(k);
                ret.push_back(tmp);
                i++;
           } 
       }
       return ret;
    }
};