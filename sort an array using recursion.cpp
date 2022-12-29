#include<bits/stdc++.h>
  void insertinsort(vector<int>&nums,int temp)
  {
      if(nums.size()==0||nums[nums.size()-1]<=temp)
      {
          nums.push_back(temp);
          return ;
      }
      else
          {
              int ans=nums[nums.size()-1];
                nums.pop_back();
                insertinsort(nums,temp);
                nums.push_back(ans);
                  return;
          }

  }

  void sort(vector<int>&nums)
  {
       if(nums.size()==1)
        return ;

       int temp=nums[nums.size()-1];
       nums.pop_back();
       sort(nums);
       insertinsort(nums,temp);
  }

 vector<int> sortArray(vector<int>& nums)
     {

    //using recursion best approach for thinking devlopment.
       sort(nums);
       return nums;
    }
};