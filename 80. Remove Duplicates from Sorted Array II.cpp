#include<bits/stdc++.h>
class Solution {
public:
#include<bits/stdc++.h>
    int removeDuplicates(vector<int>& nums) 
    { 
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            // if(m.count<=)
            m[nums[i]]++;
        }  
        nums.clear();
        for(auto j:m)
        {
            if(j.second<=2)
            {
                for(int i=0;i<j.second;i++)
                nums.push_back(j.first);
            }
            else
          {
                for(int i=0;i<2;i++)
                nums.push_back(j.first);
          }

         
        }

        return nums.size();        
    }

};