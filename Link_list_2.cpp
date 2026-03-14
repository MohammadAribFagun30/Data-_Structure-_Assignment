#include <bits/stdc++.h>
using namespace std;
// Metho-2 :
struct Node
{
    int val;
    Node *next;
};

Node *head = 0;

void value_next()
{
    static Node a, b, c, d;

    head = &a;

    a.val = 5;
    b.val = 1;
    c.val = 3;
    d.val = 7;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = 0;
}

int main()
{
    value_next();

    Node *ptr = head;

    while (ptr != 0)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }
}