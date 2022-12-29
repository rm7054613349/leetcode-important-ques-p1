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
class Solution
{
public:
    ListNode*solve(ListNode*head,int len ,int k)
    {
        if(head==NULL||len<k)
        return head;

        // if(head->next==NULL)
        // return head;

        ListNode*curr=head;
        ListNode*pre=NULL;
        ListNode*agla;
        int count=0;

                while(curr!=NULL&&count<k)
                {
                    agla=curr->next;
                    curr->next=pre;
                    pre=curr;
                    curr=agla;
                    count++;
                }
    
           if(agla!=NULL)
           head->next=solve(agla,len-k,k);
           
           return pre;
    }
    ListNode* reverseKGroup(ListNode* head, int k)   
     {
         int len=0;
          ListNode*temp=head;

         while(temp!=NULL)
         {
             len++;
             temp=temp->next;
         }

         ListNode*ans=solve(head,len,k);

         return ans;
     }
};