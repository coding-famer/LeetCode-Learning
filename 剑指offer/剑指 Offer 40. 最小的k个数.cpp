#include<vector>
using namespace std;
class Solution {
public:
    int partition(vector<int>& arr,int low,int high)
    {
        int p = arr[low];
        int i = low;
        while(low<high)
        {
            while(high>low&&arr[high]>=p) high--;
            while(low<high&&arr[low]<=p) low++;
            swap(arr[low],arr[high]);
        }
        swap(arr[low],arr[i]);
        return low;
    }
    void quicksort(vector<int>& arr,int low,int high,int k)
    {
        if(low>high) return;
        int p = partition(arr,low,high)+1;
        if(p==k) return;
        else if(p>k) quicksort(arr,low,p-2,k);
        else quicksort(arr,p,high,k);
    }
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> ret;
        quicksort(arr,0,arr.size()-1,k);
        ret.assign(arr.begin(),arr.begin()+k);
        return ret;
    }
};