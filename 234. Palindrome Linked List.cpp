class Solution {
public:
     
     ListNode* reverseList(ListNode* slow)
      {
        // ListNode* pre=NULL;
        // ListNode* next=NULL;
        // while(head!=NULL){
        //     next=head->next;
        //     head->next=pre;
        //     pre=head;
        //     head=next;
        // }
        // return pre;
         if(slow==NULL||slow->next==NULL)
        return slow;

        ListNode*ans=reverseList(slow->next);
        slow->next->next=slow;
        slow->next=NULL;

       
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};