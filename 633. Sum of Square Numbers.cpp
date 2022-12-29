class Solution {
public:
    bool judgeSquareSum(int c)
     {
      long long a=0;
        long long  b=sqrt(c); //if normal c use kroge then give tle
        //c ka squa

        while(a<=b)
        {
            if(a*a+b*b==c)
            return true;
            else if(a*a+b*b>c)
            b--;
            else
            a++;
        }

        return false;

     }
};