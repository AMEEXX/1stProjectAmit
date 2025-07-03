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

node *insert_at_head(node *head, int value)
{
    node* temp = new node(value,head);
    
    head = temp;
    return head;
}

int main(){
    vector<int> arr = {23, 67, 46, 90, 36, 48};
    node *ans = convertArrToLL(arr);
    node *newhead = insert_at_head(ans,14);
    node *temp = newhead;
    for(int i =0; i<LenghtofLL(newhead);i++){

        cout<<temp->data<<endl;
        temp = temp ->next;
    }


}