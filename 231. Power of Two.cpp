class Solution {
public:
    bool isPowerOfTwo(int n) 
    {

    
       if(n<=0)
       return false;
        while(n%2==0)
        {
                     n=n/2;
                    // count++;
                      
        }
        return n==1;

       


         

        // if(n<=0)
        // return false;
        // if(n%2==0||n==1)
        // return true;
        // else
        // return false;
        // // int a=ceil(log2(n));
        // // if(a%2==0)
        // // return true;
        // // else
        // // return false;
    }
};