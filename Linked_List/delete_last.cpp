#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data ;
    Node* next;
    Node(int data12){
        data = data12;
        next = nullptr;
    }
};

Node* Convert(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* deleteLast(Node* head){
    if (head == nullptr) return nullptr;

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    Node* deltemp = temp->next;
    delete deltemp;
    temp->next = nullptr;
    return temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    vector<int> arr = {12, 45, 64, 64, 63, 83};
    Node* ans = Convert(arr);

    cout << "Original list: ";
    printList(ans);

    Node* last = deleteLast(ans);

    cout << "After deleting last: ";
    printList(ans);

    if (last != nullptr)
        cout << "Returned node (now last): " << last->data << endl;
    else
        cout << "Returned node: NULL" << endl;

    return 0;
}
