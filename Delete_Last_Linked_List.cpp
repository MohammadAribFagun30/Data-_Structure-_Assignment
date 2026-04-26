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
    cout << endl;

    ptr = start;

    for (int i = 1; i < n-1; i++)
    {
        ptr = ptr->next;
    }

    Node *temp = ptr->next;
    ptr->next = NULL ;
    delete temp;

    ptr = start;
    cout << "List after deleting last element : ";

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        c++;
        ptr = ptr->next;
    }
}
