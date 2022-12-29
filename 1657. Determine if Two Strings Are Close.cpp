class Solution {
public:
    bool closeStrings(string w1, string w2) 
    {
        if(w1.length()<w2.length()||w1.length()>w2.length())
        return false;

         map<char,int>m,p;
         vector<int>v,ans;

         for(int i=0;i<w1.length();i++)
         {
             m[w1[i]]++;
         }
         for(int i=0;i<w2.length();i++)
         {
             p[w2[i]]++;
         }
         for(auto i:m)
         {
            v.push_back(i.second);
           // cout<<i.second<<" ";
         }

         cout<<endl;
         for(auto i:p)
         {
           ans.push_back(i.second);
           //cout<<i.second<<" ";
           if(m.find(i.first)==m.end())
           return false;
         }

         sort(v.begin(),v.end());
         sort(ans.begin(),ans.end());

          
        
        return v==ans;
    }
};