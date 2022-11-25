class Solution {
public:
    int trap(vector<int>& height)
    {

        int n=height.size();
        int mxl[n],mxr[n];
        vector<int>ans;
        
         //approach
        //every array element ke liye left mx and right max nikal ke un dono ka minimum lekar orginal array ke elment se substract krte jaye and ak array me bhrte jaye  last me jo arr me apne bhra hai uska sum hi ans hoga

        mxl[0]=height[0];
        for(int i=1;i<n;i++)
        {
             mxl[i]=max(mxl[i-1],height[i]);
        }

         mxr[n-1]=height[n-1];
         for(int i=n-2;i>=0;i--)
         {
             mxr[i]=max(mxr[i+1],height[i]);
         }
         for(int i=0;i<n;i++)
         {
             int a=min(mxl[i],mxr[i])-height[i];
             ans.push_back(a);
             
         }
           
           int sum=0;
         for(int i=0;i<n;i++)
         {
             sum=sum+ans[i];
         }
          return sum;
    }
};