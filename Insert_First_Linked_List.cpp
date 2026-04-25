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
    
    cout << endl;

    int v;
    cout << "Enter value to insert : ";
    cin >> v;

    Node *newnode = new Node();
    newnode->num = v;

    newnode->next = start;
    start = newnode;


    cout << "After inserting in  Firts : ";
    
    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }
}
