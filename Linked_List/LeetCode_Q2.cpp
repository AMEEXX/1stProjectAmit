
 struct ListNode {
     int val;
     ListNode*next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode*next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *it1 = l1;
        ListNode *it2 = l2;
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int carry = 0;
        while(it1!= nullptr || it2 != nullptr){
            int sum =0;
            if(it1!= nullptr){
                sum += it1->val;
                it1 = it1->next;
            }
            if(it2!= nullptr){
                sum += it2->val;
                it2 = it2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;


        }
        if(carry != 0) {
            ListNode *node = new ListNode(carry);
            temp->next = node;
        }
        return dummy->next;
    }
};