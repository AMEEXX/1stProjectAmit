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

node *Convert(vector<int> &arr)
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
};

int lenghtofLL(node *head)
{
    if (head == NULL)
        return 0;
    int cnt = 1;
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

node* delete_at(node *head, int k)
{
    if (k > lenghtofLL(head))
    {
        cout << "cannot delete from k overflow" << endl;
        return head;
    }
    if (head == NULL)
        return NULL;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    else
    {
        int cnt = 2;
        node *temp = head;

        while (cnt != k)
        {
            temp = temp->next;
            cnt++;
        }
        node *deltemp = temp->next;
        temp->next = temp->next->next;
        delete (deltemp);
    }
    return head;
}
int main()
{
    vector<int> arr = {23, 67, 46, 90, 36, 48};
    node* ans = Convert(arr);

    node* newhead = delete_at(ans,4);
    node* temp = newhead;
    for(int i = 0 ; i< lenghtofLL(newhead);i++){
        cout<<temp->data<<endl;
        temp = temp->next;

    }
    // int len = lenghtofLL(ans);
    // cout << len << endl;
    
    return 0;
}