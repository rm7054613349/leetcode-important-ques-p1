#include<bits/stdc++.h> 
  map<vector<int>,int>m;
  vector<vector<int>>ans;
  void permutation(vector<int>&nums,int index)
  {
      if(index>=nums.size())
      {
          m[nums];
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
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {

        sort(nums.begin(),nums.end());
        permutation(nums,0);

        for(auto pr:m)
        {
            ans.push_back(pr.first);
        }

        return ans;
        
    }