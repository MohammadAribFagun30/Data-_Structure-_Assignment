#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int number;
    Node *next;
};
// struct Node
// {
//     int number;
//     Node *next;
// };
int main()
{
    Node *start, *ptr;
    start = new Node();
    ptr = start;

    cout << "How many elements : ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Input a number : ";
        cin >> ptr->number;

        if (i != n)
        {
            ptr->next = new Node();
            ptr = ptr->next;
        }
    }

    ptr->next = NULL;

    cout << "Elements in Link List are : ";

    ptr = start;

    while (ptr != NULL)
    {

        cout << ptr->number << " ";
        ptr = ptr->next;
    }
    cout << endl;

    int x;
    cout << "Enter element to search : ";
    cin >> x;
    ptr = start;
    int pos = 1;

    while (ptr != NULL)
    {
        if (x == ptr->number)
        {
            cout << "Found at position: " << pos << endl;
        }
        ptr = ptr->next;
        pos++;
    }
    cout << "Not found !! " << endl;

    return 0;
}