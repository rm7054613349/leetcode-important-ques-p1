 #include<bits/stdc++.h>
class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char,int>m;

        //insert element in map
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});

        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]<m[s[i+1]])  //if I V ho the
            count=count-m[s[i]];    // IV ye 4 ka roman hai 1-5 =-4=4
            else
            count=count+m[s[i]];
        }

        return count;

    }
};