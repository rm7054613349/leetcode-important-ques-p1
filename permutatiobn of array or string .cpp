#include<bits/stdc++.h> 
 //for result storing
    vector<vector<int>>ans;
    void permutation(vector<int>&nums,int index)
    {
          if(index>=nums.size())
          {
              ans.push_back(nums);
              return ;
          }
        for(int i=index;i<nums.size();i++)
        {
                  swap(nums[index],nums[i]);
                  permutation(nums,index+1);

                  //backtracking
                  swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        permutation(nums,0);
        return ans;
    }