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
    void reorderList(ListNode* head) {
     ListNode* tail;
     ListNode* fast;
     ListNode* slow;
     fast=head;
     slow=head;
     while(fast!=nullptr && fast->next!=nullptr)
     {
      slow=slow->next;
      fast=fast->next->next;
     } 
     ListNode* second = slow->next;
     slow->next=nullptr;
     //reversing the linked list
     ListNode* prev=nullptr;
     ListNode* curr=second;
     ListNode* next;
     while(curr!=nullptr)
     {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
      
     }
     second = prev ; //gpt helped
     //merging the linked list
     ListNode* dummy;
     while(second!=nullptr)
     {
       ListNode* temp1 = head->next; // gpt helped in this section
       ListNode* temp2 = second->next;

      head->next = second;
      second->next = temp1;
                                      
       head = temp1;
       second = temp2;

     }

     

    }
};
