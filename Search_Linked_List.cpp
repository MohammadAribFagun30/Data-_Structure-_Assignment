#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int number; 
    Node *next; 
};
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
    int ITEM;
    cout << "Enter element to search: ";
    cin >> ITEM;

    ptr = start;
    int position = 1;
    bool found = false;

    
    while (ptr != NULL)
    {
        if (ptr->number == ITEM)
        {
            cout << "Item found..!" << endl;
            cout << "Position: " << position << endl;
            cout << "Address: " << ptr << endl;

            found = true;
            break;
        }

        ptr = ptr->next;
        position++;
    }

    if (!found)
    {
        cout << "Item not found in the list";
    }

    return 0;
}