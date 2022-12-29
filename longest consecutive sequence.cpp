class Solution {
public:
        int longestConsecutive(vector<int>& nums)
        {
       
             map<int,int>m;

                
                if(nums.size()==0)
                return 0;
                if(nums.size()==1)
                return 1;
                
                for(int i=0;i<nums.size();i++)
                {
                    m[nums[i]]++;
                }
            

                vector<int>ans;
                for(auto pr:m)
                {
                ans.push_back(pr.first);
                } 
                
                int mx=0;
                int count=0;
                
                
                        for(int i=0;i<ans.size()-1;i++)
                        {
                            //diffrence check kiya for consecution ke liye
                            if(abs(ans[i]-ans[i+1])==1)
                           {
                                count++;
                                //max consecutive nikalna hai isliye max krr rha hu
                                 mx=max(mx,count);
                           }
                            else
                            {
                               
                                count=0;
                            }
                    }

                return mx+1;
     }
};