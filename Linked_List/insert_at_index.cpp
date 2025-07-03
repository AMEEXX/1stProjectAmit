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
    node(int data1, node *next1)
    {
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

node *insert_at_index(node *head, int value,int k)
{
    if(head == NULL) {
        if(k==1){
            node *insertnew =new node(value);
            return insertnew;
        }
        else return head;
        
        return head;}
    else if(head->next == nullptr || k ==1){
        if(k == 1){
            node *newinsert = new node(value,head);
            head = newinsert;
        }
        else if(k == 2){
            node *newinsert = new node(value);
            head->next = newinsert;
        }
        else return head;
    }
    else if((k-1)>LenghtofLL(head)) return head;
    else if(k == 1); 
    else {
        node *temp = head;
        int cnt = 2;
        while(true){
            if(cnt != k){
                temp = temp->next ;
                cnt++;
            }
            else break;
        }
        node *newinsert = new node(value,temp->next);
        temp ->next = newinsert;
    }
    return head;


}

int main()
{
    vector<int> arr = {23, 67, 46, 90, 36, 48};
    node *ans = convertArrToLL(arr);
    node *newhead = insert_at_index(ans, 14,7);
    node *temp = newhead;
    for (int i = 0; i < LenghtofLL(newhead); i++)
    {

        cout << temp->data << endl;
        temp = temp->next;
    }
}