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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len=0;
        int count=1;
         
         ListNode*temp=head;
         ListNode*curr=head;
        // ListNode*pre=NULL;

         while(temp!=NULL)
         {
             len++;
             temp=temp->next;
         }
         

         int a=len-n;

         if(a==0)
         return head->next;

         while(count<a)
         {
              //pre=curr;
              curr=curr->next;
              count++;
         }
         curr->next=curr->next->next;
         return head;
        
    }
};