#include<bits/stdc++.h>
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        long long tsum=0;
        long long lsum=0,rsum=0;
        int ans=0;
        
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
             tsum=tsum+nums[i];
        }



        for(int i=0;i<nums.size();i++)
        {
            lsum=lsum+nums[i];
            rsum=tsum-lsum;

            //   if(nums[i]==0)
            //   return i;

            int a= lsum/(i+1);
            
            int b=0;
            if(nums.size()-i-1!=0)
            b=(tsum-lsum)/(nums.size()-i-1) ;    //nums.size()-i-1 ko zero se bchane ke liye ye kiya
            else
            b=0;

            

            int c= abs(a-b);
            if(mn>c)
            {
                mn=c;
                ans=i;
            }

        }
        return ans;
    }
};