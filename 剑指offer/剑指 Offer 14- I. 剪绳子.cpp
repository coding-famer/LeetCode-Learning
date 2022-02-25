class Solution {
public:
    int cuttingRope(int n) {
        if(n<=3) return n-1;
        int count = 0;
        int ans=1;
        while(n>3)
        {
            count++;
            n-=3;
        }
        for(int i=0;i<count;i++) ans*=3;
        if(n==0) return ans;
        else if(n==1) return ans/3*4;
        else return ans*n; 
    }
};