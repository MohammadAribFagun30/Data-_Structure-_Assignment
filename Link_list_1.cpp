#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};
int main()
{
    Node a, b, c, d;
    Node *head = &a;

    a.val = 5;
    b.val = 1;
    c.val = 3;
    d.val = 7;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = 0;

    Node *ptr = head;

    while (ptr != 0)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }

    return 0;
}


