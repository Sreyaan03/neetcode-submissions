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
    ListNode* reverseList(ListNode* head) {
    ListNode* prev;
    ListNode* curr;
    ListNode* next;
    prev=nullptr;
    curr=head;
    
    while(curr!=nullptr)
    {
       
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next; 
        
        
    }
    

    return prev;
    }
};
/*
Before:
prev -> nullptr
curr -> 1 -> 2 -> 3 -> nullptr

Iteration 1:
next = 2
1 -> nullptr
prev = 1
curr = 2

Iteration 2:
next = 3
2 -> 1 -> nullptr
prev = 2
curr = 3

Iteration 3:
next = nullptr
3 -> 2 -> 1 -> nullptr
prev = 3
curr = nullptr

Return prev (new head).
*/
