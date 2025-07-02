#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data ;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

 Node* ConvertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;
 }
int main(){
    vector<int> arr = {12,56,47,68,39};
    Node* ans = ConvertArrToLL(arr);
    Node* temp = ans;
    while(temp){
        if(val)
        temp = temp->next;
    }

    return 0;
}