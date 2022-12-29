class Solution 
{
public:
    int solve(string s,string t,int i,int j,int &count)
    {
        cout<<count<<endl;
        if(i==s.length()||j==t.length())
        {
            return 0;
        }
        if(s[i]==t[j])
        {
         
          count= 1+solve(s,t,i+1,j+1,count);
        }
        else
        {
            solve(s,t,i,j+1,count);
        }

        // if(count==s.length())
        // return true;
        // else
        // return false;

        return count;
    }
    bool isSubsequence(string s, string t) 
    {
        //bool ans=false;

        // if(s.length()==0)
        // return true;
        int count=0;
        solve(s,t,0,0,count);

        if(count==s.length())
        return true;
        else
        return false;

    }
};