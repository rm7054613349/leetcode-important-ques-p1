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
    ListNode* deleteMiddle(ListNode* head)
     {
         int len=0;
        int count=1;
         
         ListNode*temp=head;
         ListNode*curr=head;
        // ListNode*pre=NULL;

ListNode*slow=head;
ListNode*fast=head;

         

        while(temp!=NULL)
         {
             len++;
             temp=temp->next;
         }
         while(fast!=NULL&&fast->next!=NULL)
         {
             fast=fast->next->next;
             slow=slow->next;
         }

         
          
         int a=len/2;

         if(a==0)
         return head->next;

         while(curr->next!=slow)
         {
              //pre=curr;
              curr=curr->next;
              //count++;
         }
         curr->next=curr->next->next;
         return head;
        
    }
};