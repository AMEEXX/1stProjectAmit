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

node *insert_before_val(node *head, int value, int k)
{
    if (head == NULL)
    {

        return head;
    }
    else if (head->next == nullptr || head->data == value)
    {
        if (head->data == value)
        {
            node *newinsert = new node(k, head);
            head = newinsert;
            return head;
        }

        else
            return head;
    }

    else
    {
        node *temp = head;
        while (temp->next->data != value)
        {
            temp = temp->next;
            if (temp == nullptr)
                return head;
        }
        node *newinsert = new node(k, temp->next);
        temp->next = newinsert;
    }
    return head;
}

int main()
{
    vector<int> arr = {23, 67, 46, 90, 36, 48};
    node *ans = convertArrToLL(arr);
    node *newhead = insert_before_val(ans, 23, 27);
    node *temp = newhead;
    for (int i = 0; i < LenghtofLL(newhead); i++)
    {

        cout << temp->data << endl;
        temp = temp->next;
    }
}