#include<bits/stdc++.h>
vector<vector<int>>answered;

    void solve(vector<int>& ans, int i,vector<int>&nums)
    {
        if(i==nums.size())
        {
            answered.push_back(ans);
            return;
        }
        //not choose
        solve(ans,i+1,nums);

        //if choose
        ans.push_back(nums[i]);
        solve(ans,i+1,nums);

        //backtracking 
        ans.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        //store subset
        vector<int>ans;
        //0 diya hai for indexing of array at started at 0;
        solve(ans,0,nums);

        return answered;

    }
};