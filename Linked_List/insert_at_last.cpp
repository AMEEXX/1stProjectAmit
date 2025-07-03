#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
};

node *convertArrToLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LenghtofLL(node *head)
{
    int cnt = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

node *insert_at_last(node *head, int value)
{
    if(head == NULL) {
    node* onlyelement = new node(value);
    return onlyelement;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    node *newnode = new node(value);
    temp->next = newnode;
    return head;
}

int main(){
    vector<int> arr = {23, 67, 46, 90, 36, 48};
    node *ans = convertArrToLL(arr);
    node *newhead = insert_at_last(ans,19);
    node *temp = newhead;
    for(int i =0; i<LenghtofLL(newhead);i++){

        cout<<temp->data<<endl;
        temp = temp ->next;
    }


}