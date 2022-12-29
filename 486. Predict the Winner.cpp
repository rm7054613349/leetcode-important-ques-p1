class Solution {
public:
    
    int solve(vector<int>&nums,int i,int j)
    {

        if(i>j)
        return 0;
        if(i==j)
        return nums[i];

        //max score nikal rhe hai ham p1 ka
        int op1=nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int op2=nums[j]+min(solve(nums,i,j-2),solve(nums,i+1,j-1));

        return max(op1,op2);
    }
    bool PredictTheWinner(vector<int>& nums) 
    {
        int p1score=solve(nums,0,nums.size()-1);
         
         int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }

        int p2score=sum-p1score;
        if(p1score>=p2score)
        return true;
        else
        return false;
    }
};