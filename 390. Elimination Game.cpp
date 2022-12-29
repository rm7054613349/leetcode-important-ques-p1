class Solution {
public:
    int lastRemaining(int n) 
    {
        if(n==1||n==0)
        return n;
        else
        return 2*(1+n/2-lastRemaining(n/2));
    }
};