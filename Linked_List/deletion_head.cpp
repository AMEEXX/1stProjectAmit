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

Node* delete_Node(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
int main(){

    vector<int>arr ={23,67,46,90,36,48};
    Node* ans = Convert(arr);
    
    Node* newans = delete_Node(ans);;
    cout<<newans->data<<" ";


    return 0;
}