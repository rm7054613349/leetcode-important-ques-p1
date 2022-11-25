class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
     {
        vector<int>v;
        stack<int>s;
        int c=INT_MIN;
        

         /*
          condition for solving
         1-ham right side se check krenge

         2-yadi stack empty mila then ham cyclic form me check krenge

         3-yadi stack empty nhi hai and and stack ka top greater hai nums[i] se then hamans         wale vector me push krr denge

         4-yadi stack ka top<nums[i] then ham pop krte rhenge tab tak jab tak ya to stack empty na ho jaye ya phir s.top greater na mil jaye
         
         yadi empty mila then again cyclick me ham check krenge
         */
        //cyclic form me array me move krne ke liye hai
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                int a=nums[i];
                for(int j=0;j<i;j++)
                {
                       if(nums[j]>a)
                       {
                          c=nums[j];
                           break;
                       }
                }
                if(c!=INT_MIN)
                v.push_back(c);
                else
                v.push_back(-1);

            }
            else if(s.size()!=0&&s.top()>nums[i])
            v.push_back(s.top());
            else if(s.size()!=0&&s.top()<=nums[i])
            {
                while(s.size()>0&&s.top()<=nums[i])
                s.pop();

                c=INT_MIN;


                 //cyclic form me array me move krne ke liye hai
                if(s.size()==0)
                {
                    int a=nums[i];
                    for(int j=0;j<i;j++)
                    {
                        if(nums[j]>a)
                        {
                            c=nums[j];
                            break;
                        }
                    }
                    cout<<c<<endl;
                if(c!=INT_MIN)
                v.push_back(c);
                else
                v.push_back(-1);
                }
                else
                v.push_back(s.top());
            }
            s.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};