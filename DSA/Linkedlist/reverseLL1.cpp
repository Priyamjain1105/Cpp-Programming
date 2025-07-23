// Iterative Reverse

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

public:
    Node() : value(0), next(nullptr) {}
    Node(int v) : value(v), next(nullptr) {}
    Node(int v, Node *n) : value(v), next(n) {}
};

Node *arrtoLL(vector<int> arr)
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

void printLL(Node *head)
{
    Node *temp = head;
    cout << "Started";
    while (temp->next != nullptr)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
}

Node *reverseLL(Node *head)
{
    Node *temp = head;
    Node *perv = NULL;

    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = perv;
        perv = temp;
        temp = front;
    }
    return perv;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrtoLL(arr);
    cout << head->value;
    printLL(head);
    Node *newhead = reverseLL(head);
    cout << endl;

    printLL(newhead);
}