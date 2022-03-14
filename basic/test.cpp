#include"template.h"
#include<iostream>
#include<vector>

void test_mergesort()
{
    vector<int> t={13,5,2,7,4,9,6,1};
    mergesort(t);
    for(int i=0;i<t.size();i++)
        cout<<t[i]<<" ";
}


int main()
{
    test_mergesort();
}