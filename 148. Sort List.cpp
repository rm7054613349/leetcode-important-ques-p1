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
class Solution {
public:
//int temp;
 ListNode* merg(ListNode*p,ListNode*q)
 {

    // ListNode*ans=p;
    ListNode*temp=new ListNode(0);
    ListNode*tail=temp;

    while(p!=NULL && q!=NULL)
    {
        if(p->val<=q->val)
        {
            tail->next=p;
            p=p->next;
        }
        else
        {
            tail->next=q;
            q=q->next;
        }
        tail=tail->next;
    }

        if(p!=NULL)
        {
           tail->next=p;
           p=p->next;
        }

        if(q!=NULL)
        {
           tail->next=q;
           q=q->next;
        }
    
     //ans=temp->next;

     return temp->next;
}

    
    ListNode* merges(ListNode*head)
    {

       if(head==NULL||head->next==NULL)
       return head;

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode*temp=NULL;
        
        while(fast!=NULL)
        {
            temp=slow;
            fast=fast->next;
            if(fast!=NULL)
            fast=fast->next;

            slow=slow->next;
        }

          // ListNode*temp=slow;
          temp->next=NULL;
           ListNode*p= merges(head);
           ListNode*q= merges(slow);

            ListNode*ans=merg(p,q);
        

        return ans;
    }

    ListNode* sortList(ListNode* head)
     {
         

         ListNode*ans=merges(head);

         return ans;
       
     }
};