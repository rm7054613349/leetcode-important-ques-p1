class Solution {
public:
  
    int solve(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        
        return (solve(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) 
    {
        int ans=solve(n,k)+1;//yha one + isliye kiya kyki jo modulo ka ans ayega vo include 0 based rhega usko 1 me conversion ke liye ye kiya hai

        return ans;
    }
};