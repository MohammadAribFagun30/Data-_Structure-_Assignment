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

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    int v;
    cout << "Enter value to insert : ";
    cin >> v;

    Node *newnode = new Node();
    newnode->num = v;

    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    //ptr->next = 0;

    newnode->next = ptr->next;
    ptr->next = newnode;

    

    cout << "After inserting in  last : ";
    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    return 0;
}
