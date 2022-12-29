#include<bits/stdc++.h>
class Solution {
public:
    int minStoneSum(vector<int>& p, int k) 
    {
        priority_queue<int>pq;

        for(int i=0;i<p.size();i++)
        {
            pq.push(p[i]);
        }

        while(p.size()!=0&&k!=0)
        {
            int a=pq.top();

            pq.pop();
            int b=ceil(float(a)/2);
           // cout<<b;

            pq.push(b);
            k--;
        }
       
        int sum=0;
        while(pq.size()!=0)
        {
           // cout<<pq.top()<<endl;
            sum=sum+pq.top();
            pq.pop();
        }

        return sum;
    }
};