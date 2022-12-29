#include<bits/stdc++.h>
vector<vector<int>>answered;
map<vector<int>,int>m;

    void solve(vector<int>&ans,int i,vector<int>&nums)
    {
            if(i==nums.size())
            {
                // answered.push_back(ans);

            //duplicates remove krne ke ke liye hmne map ka use kiya
            m[ans];
                return;
            }
            //not choose
            solve(ans,i+1,nums);

            //choose element
            ans.push_back(nums[i]);
            solve(ans,i+1,nums);

            //back tracking
            ans.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
          vector<int>ans;

          sort(nums.begin(),nums.end());
        
          solve(ans,0,nums);
          
            //   for(int i=0;i<answered.size();i++)
            //   {
            //      s.insert(answered[i]);
            //   }

            for(auto pr:m)
            {
                answered.push_back(pr.first);
            }

          return answered;
    }
};