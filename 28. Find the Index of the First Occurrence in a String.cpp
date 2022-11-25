class Solution {
public:
#include<bits/stdc++.h>
    int strStr(string haystack, string needle)
     {
         int ans;
         int i;
         int len=needle.length();
         
         for( i=0;i<haystack.length();i++)
              {
                  string a=haystack.substr(i,len);
                   if(a==needle)
                   {
                            ans=i;
                            break;
                   }
                   else
                   {
                       ans=-1;
                   }
               }
         
               return ans;
     }
};