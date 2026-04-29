#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int num;
    Node *next;
};

int main()
{
    Node *start, *ptr, *NEW, *Loc;
    NEW = new Node();
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


cout << "\nEnter number to delete: ";
int del;
cin >> del;

Node *prev = NULL;
ptr = start;


while (ptr != NULL)
{
    if (ptr->num == del)
    {
        break;
    }
    prev = ptr;
    ptr = ptr->next;
}

// If not found
if (ptr == NULL)
{
    cout << "Element not found!" << endl;
}
else
{

    if (prev == NULL)
    {
        start = ptr->next;
    }
    else
    {
        
        prev->next = ptr->next;
    }

    delete ptr;
}

// Print updated list
cout << "After Deletion : ";
ptr = start;
while (ptr != NULL)
{
    cout << ptr->num << " ";
    ptr = ptr->next;
}
}