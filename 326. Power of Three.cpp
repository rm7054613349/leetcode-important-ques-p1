#include<bits/stdc++.h>
#define mod 1000000007
class Solution {
public:
    bool isPowerOfThree(int n)
    {
        int count=0;

        if(n<=0)
        return false;
     while(n%3==0)
     {
         n=n/3;
     }
    if(n==1)
    return true;
    else return false; 
    }
};