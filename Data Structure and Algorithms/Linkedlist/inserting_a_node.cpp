#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1) : data(data1), next(nullptr) {}
    Node(int data1, Node *next1) : data(data1), next(next1) {}
};

Node *arr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *perv = head;
    for (int i = 1; i <= arr.size() + 1; i++)
    {
        Node *temp = new Node(arr[i]);
        perv->next = temp;
        temp = temp->next;
    }
    return head;
}

void traversal(Node* head){
    Node* temp = head;
    
}

void insert_node(Node *head, int index, int data)
{
    Node *new_node = new Node(data);
    Node *temp = head;
    int count = 0;
    while (count <= index - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *forward = temp->next;
    temp->next = new_node;
    new_node->next = forward;

    cout << "New Node Added";
}

int main()
{
}