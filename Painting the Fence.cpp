#define mod 1000000007
class Solution{
    public:
    
    long long solve(int n,int k,long long dp[])
    {
        if(n==1)
        return k;
        if(n==2)
        return k*k;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int same=(solve(n-2,k,dp)*(k-1))%mod;
        int diff=(solve(n-1,k,dp)*(k-1))%mod;
        
         return dp[n]= (same+diff)%mod;
        
        
    }
    long long countWays(int n, int k)
    {
        // code here
        long long dp[5001];
        for(int i=0;i<5001;i++)
        {
            dp[i]=-1;
        }
        long long ans=solve(n,k,dp);
        
        return ans%mod;
    }
};