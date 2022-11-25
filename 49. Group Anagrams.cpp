class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {


         //strings=["eat","tea","tan","ate","nat","bat"]
         /*
              every string ke liye sort krenge lekin push original string hi hogi 

               aet -- eat, tea, ate  //map ki second value me store hoge sbhi
               ant -- tan, nat
               abt -- bat
         */ 

        map<string,vector<string>>m;
        vector<vector<string>>ans;

        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];

            sort(s.begin(),s.end());

            //push krna hai original string but map ka first same hoga sare anagram ke liye
            m[s].push_back(strs[i]);
        }

        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};