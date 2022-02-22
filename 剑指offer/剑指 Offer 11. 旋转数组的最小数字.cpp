#include<vector>
using namespace std;
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l = 0;
        int r = numbers.size()-1;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(numbers[r]<numbers[m])  l=m+1;
            else if(numbers[r]==numbers[m])  r--;
            else r=m;
        }
        return numbers[l];
    }
};


class Solution {
public:
    int minArray(vector<int>& numbers) {
      int begin = 0, end = numbers.size() - 1;
      while(begin < end) {
        if(numbers[begin] < numbers[end]) return numbers[begin];
        // 找旋转点，不满足直接begin++
        else begin++;
      }
      return numbers[begin];
    }
};