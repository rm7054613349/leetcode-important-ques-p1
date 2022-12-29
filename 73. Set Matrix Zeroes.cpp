class Solution {
public:
    void setZeroes(vector<vector<int>>& m) 
    {
       set<int>r0;
       set<int>c0;

       for(int i=0;i<m.size();i++)
       {
           for(int j=0;j<m[i].size();j++)
           {
               if(m[i][j]==0)
               {
                   r0.insert(i);
                   c0.insert(j);
               }
           }
       }


/// for row
       for(auto i:r0)
       {
           for(int j=0;j<m[0].size();j++)
           m[i][j]=0;
       }
  //for column
    for(auto i:c0)
       {
           for(int j=0;j<m.size();j++)
           m[j][i]=0;
       }
    }
};