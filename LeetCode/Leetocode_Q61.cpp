
//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* tail = head;
        int len = 1;
        while(tail->next != nullptr){
            tail = tail->next;
            len++;
        }
        k = k%len;
        tail->next = head;
        ListNode* newhead = tail->next;
        for(int i = 0; i<len-k; k++){

            newhead = newhead->next;
            tail = tail->next;
        }
        tail->next = nullptr;
        return newhead;
    }
};