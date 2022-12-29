#include<bits/stdc++.h>

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
    class cmp
    {
        public:
        bool operator()(ListNode*a,ListNode*b)
        {
            return a->val>b->val;
        }
    };
    class Solution {
    public:

    
    ListNode* mergeKLists(vector<ListNode*>&l)
     {
         priority_queue<ListNode*,vector<ListNode*>,cmp>p;
           for(int i=0;i<l.size();i++)
           {
               if(l[i]!=NULL)
               p.push(l[i]);
           }
           
           ListNode*head=new ListNode(0);
           ListNode*tail=head;
           
           while(p.size()!=0)
           {
               ListNode*curr=p.top();
               p.pop();
               
               tail->next=curr;
               tail=curr;
               
               if(curr->next!=NULL)
                p.push(curr->next);
           }
           return head->next;
     }
};