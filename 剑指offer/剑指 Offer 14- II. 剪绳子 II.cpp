class Solution {
public:
    const long long int mod = 1e9+7;
    int cuttingRope(int n) {
        if(n<=3) return n-1;
        long ans=1;
        while(n>4)
        {
            ans = (ans * 3) % mod;
            n-=3;
        }
        return (ans*n)%mod; 
    }
};