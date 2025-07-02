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
    for( int i =1 ; i< arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        
    }
    return head;
}

Node* delete_last(Node* head){
    Node* temp = head;
    Node* temp2 = head;
    while(temp->next != nullptr){
        temp2 = temp;
        
        continue;
    }
    free(temp2);
    temp = nullptr;
    return temp;
}
int main(){
    vector<int>arr = {12,45,64,64,63,83};
    Node* ans = Convert(arr);
    Node* last = delete_last(ans);
    cout<<last->data<<endl;
}