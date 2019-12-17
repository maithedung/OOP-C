#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node *second = new Node();
    second->data = 2;
    second->next = nullptr;

    Node *third = new Node();
    third->data = 3;
    third->next = nullptr;

    // Lien ket cac node lai voi nhau
    head->next = second;
    second->next = third;

    // Truy cap
    // cout << head->data;

    Node *p = head;
    while (p != nullptr)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    return 0;
}