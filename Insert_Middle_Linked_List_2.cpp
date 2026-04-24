#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int num;
    Node *next;
};
int main()
{
    Node *start, *ptr;
    start = new Node();
    ptr = start;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> ptr->num;

        if (i != n)
        {
            ptr->next = new Node();
            ptr = ptr->next;
        }
    }
    ptr->next = NULL;

    cout << "List before insert : ";
    ptr = start;

    int c = 0;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        c++;
        ptr = ptr->next;
    }
    int mid;

    if (c % 2 == 0)
    {
        mid = (c / 2) + 1;
    }

    else
    {
        mid = (c + 1) / 2;
    }

    ptr = start;
    for (int i = 1; i < mid - 1; i++)
    {
        ptr = ptr->next;
    }
    cout << endl;

    int v;
    cout << "Enter value to insert : ";
    cin >> v;

    Node *newnode = new Node();
    newnode->num = v;

    newnode->next = ptr->next;
    ptr->next = newnode;

    cout << "After inserting : ";
    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    return 0;
}