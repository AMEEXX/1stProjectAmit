
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
       Node* temp = head;
       while(temp!= nullptr){
        Node* newnode = new Node(temp->val);
        newnode ->next = temp->next;
        temp->next = newnode;
        temp = temp ->next->next;
       }
       temp = head;
       while(temp!=nullptr){
        Node*currnext = temp->next;
        if(temp->random != nullptr){
            currnext->random= temp->random->next;
        }
        
        temp = temp->next->next;
       }
       temp = head;
        
        Node*finalhead = temp->next;
       
       while(temp!= nullptr){
        Node* copy = temp->next;
        temp ->next = copy->next;
        if(copy->next) copy ->next = copy->next ->next;
        temp = temp->next;
       }
       return finalhead ;

        
    }
};