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

    cout << "Input number to delete  : ";
    int x;
    cin >> x;

    NEW = new Node();
    NEW->num = x;

    int pos = 1;

    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->num == x)
        {
            break;
        }
        ptr = ptr->next;
        pos++;
    }

    Node *temp;

    if (pos == 1)
    {
         temp = start;
        start = start->next;
    }

    else
    {
        ptr = start;

        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }


        //  delete
        temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
    }

    cout << "After Deletion : ";
    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }
}
