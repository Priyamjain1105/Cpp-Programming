#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d1) : data(d1), next(nullptr) {}
    Node(int d2, Node *n2) : data(d2), next(n2) {}
};

Node *arr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *perv = head;
    for (int i = 1; i < arr.size() + 1; i++)
    {
        Node *temp = new Node(arr[i]);
        perv->next = temp;
        perv = temp;
    }
    return head;
}

void traversal(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL && temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {7, 5, 6, 4, 2, 3, 1};
    Node *head = arr2LL(arr);
    traversal(head);
}