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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* a1;
       ListNode* a2;

       if(list1 == nullptr) return list2;
       if(list2 == nullptr) return list1;
       if(list1->val <= list2->val)
      {
        a1=list1;
        list1=list1->next;
      }
      else
      {
        a1=list2;
        list2=list2->next;
      }
      a2=a1;
       while(list1!=nullptr&&list2!=nullptr)
       {
        if(list1->val<= list2->val && list1!=nullptr)
        {
          a1->next=list1;
          //a1=a1->next;
          list1=list1->next;
        }
        else
        {
          a1->next=list2;
          //a1=a1->next;
          list2=list2->next;
        }
        a1=a1->next;
       }
       if(list1 != nullptr)
       a1->next = list1;
       else
       a1->next = list2;
      return a2;
    }
    
};
