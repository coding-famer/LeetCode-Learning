// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem118.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        vector<int> m;
        m.push_back(1);
        ret.push_back(m);       
        if(numRows==1) 
            return ret;
        vector<int> n;
        n.push_back(1);
        n.push_back(1);
        ret.push_back(n);
        if(numRows==2)
            return ret;
        for(int i=3;i<=numRows;i++)
        {
            vector<int> tmp;
            vector<int> a=ret[i-2];
            tmp.push_back(1);
            for(int j=0;j<i-1;j++)
            {
                tmp.push_back(a[j]+a[j+1]);
            }
            tmp.push_back(1);
            ret.push_back(tmp);
        }
        return ret;
       

    }
};


// @lc code=end

