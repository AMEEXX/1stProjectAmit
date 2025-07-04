
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseLinkelist(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr ) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* getKthnode(ListNode* head, int k) {
        k -= 1;
        ListNode* temp = head;
        while (k > 0 && temp != nullptr) {
            temp = temp->next;
            k--;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* kthNode = head;
        ListNode* nextnode = head;
        ListNode* prevnode = nullptr;
        while (temp != NULL) {
            kthNode = getKthnode(temp, k);
            if (kthNode == nullptr) {
                if (prevnode)
                    prevnode->next = temp;
                break;
            }
            nextnode = kthNode->next;
            kthNode->next = nullptr;
            reverseLinkelist(temp);
            if (temp == head)
                head = kthNode;
            else {
                prevnode->next = kthNode;
            }
            prevnode = temp;
            temp = nextnode;
        }
        return head;
    }
};