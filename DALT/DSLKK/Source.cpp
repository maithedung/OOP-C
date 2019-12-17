#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class List
{
public:
    Node *head;
    Node *tail;

public:
    void Init(List &l)
    {
        l.head = l.tail = nullptr;
    }
    Node *createNode(int x)
    {
        Node *p = new Node();
        if (p == nullptr)
            exit(1);
        p->data = x;
        p->next = nullptr;
        return p;
    }
    bool isEmpty(List l)
    {
        if (l.head == nullptr)
            return true;
        return false;
    }
    void addHead(List &l, int x)
    {
        Node *p = createNode(x);
        if (isEmpty(l))
            l.head = l.tail = p;
        else
        {
            p->next = l.head;
            l.head = p;
        }
    }
    void addTail(List &l, int x)
    {
        Node *p = createNode(x);
        if (isEmpty(l))
            addHead(l, x);
        else
        {
            l.tail->next = p;
            l.tail = p;
        }
    }

    Node *search(List l, int k)
    {
        Node *p = l.head;
        while (p != nullptr)
        {
            if (p->data == k)
                return p;
            else
                p = p->next;
        }
        return nullptr;
    }

    void addMid(List &l, int x, int k)
    {
        Node *p = search(l, k);
        if (p != nullptr)
        {
            Node *q = createNode(x);
            Node *r = p->next;
            p->next = q;
            q->next = r;
        }
    }
};

int main()
{
    List l;
    l.Init() return 0;
}