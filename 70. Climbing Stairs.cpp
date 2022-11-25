class Solution {
public:

   int ans=0;
  int  dp[46];
    int helper(int n,int dp[])
    {
         if(n==0)
        return 1;
        if(n==1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];
        else
         dp[n]=helper(n-1,dp)+helper(n-2,dp);


        return dp[n];
    }
    int climbStairs(int n) 
    {
     
        for(int i=0;i<46;i++)
        {
            dp[i]=-1;
        }
      int ans= helper(n,dp);
      return ans;
    }
};