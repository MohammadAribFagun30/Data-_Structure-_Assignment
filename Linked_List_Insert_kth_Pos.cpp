#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int num;
    Node *next;
};

int main()
{
    Node *start, *ptr, *NEW;
    start = new Node();
    ptr = start;

    cout << "How many elements : ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Input a number : ";
        cin >> ptr->num;

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
        cout << ptr->num << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "Insert number : ";
    int x;
    cin >> x;

    cout << "Enter position (k) : ";
    int k;
    cin >> k;

    NEW = new Node();
    NEW->num = x;
    
    // Case 1: insert at beginning
    if (k == 1)
    {
        NEW->next = start;
        start = NEW;
    }
    else
    {
        ptr = start;

        for (int i = 1; i < k - 1; i++)
        {
            ptr = ptr->next;
        }

       
        //  insert
        NEW->next = ptr->next;
        ptr->next = NEW;
    }

    cout << "After Insertion : ";
    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    return 0;
}