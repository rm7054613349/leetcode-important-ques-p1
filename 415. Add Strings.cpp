class Solution {
public:

   void solve(string& num1,string &num2,string &ans,int carry,int i,int j)
   {
       if(i<0&&j<0&&carry==0)
       return;
       
       int a=0;
       int b=0;

       // i ka valid index ho
       if(i>=0)
       a=num1[i]-'0';  //convert string to int
       //j ka valid index ho
       if(j>=0)
       b=num2[j]-'0';  //convert string to int

       int sum=a+b+carry;
       int lastdigit=sum%10;
       carry=sum/10;

       ans.push_back(lastdigit +'0');//ye int ko string me convert krta hai
       //'0'=48 hoga and assume lastdigit 4 hai then sum =52 iski ascii value 4 hogi


       //recursion call
       solve(num1,num2,ans,carry,i-1,j-1);

   }
    string addStrings(string num1, string num2) 
    {
        string ans;
        solve(num1,num2,ans,0,num1.size()-1,num2.size()-1);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};