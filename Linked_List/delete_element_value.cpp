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

node *delete_at_value(node *head, int value)
{
    if(head == NULL) return head;
    if (head->data == value  || head->next == nullptr)
    {
        if(head->data == value){
            node * temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
    }
    
    else
    {
        node *temp = head;
        
        while((temp->next)->data != value)
        {
            temp = temp->next;
            if(temp->next == nullptr) return head;
        }
        node *deltemp = temp->next;
        temp->next = temp->next->next;
        delete (deltemp);
    }
    return head;
}

int main()
{
    vector<int> arr = {67, 37, 45, 575, 27, 67};
    node *head = convertArrToLL(arr);
    node *finalans = delete_at_value(head,45);
    node* temp = finalans;
    for(int i =0; i<LenghtofLL(finalans);i++){

        cout<<temp->data<<endl;
        temp = temp ->next;
    }
    return 1;

}