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

    cout << "Insert number : ";
    int x;
    cin >> x;
    NEW->num = x;

    Node *save;

    // FIND LOC

    if (start == NULL || x < start->num)
    {
        Loc = NULL;
    }
    else
    {

        // 10 20 30 50

        save = start;      // 10
        ptr = start->next; // 20

        while (ptr != NULL)
        {
            if (x < ptr->num)
            {
                break;
            }

            save = ptr;      // 20
            ptr = ptr->next; // 30
        }

        Loc = save;
    }

    // Case 1: insert at beginning
    if (Loc == NULL)
    {
        NEW->next = start;
        start = NEW;
    }

    // Case 2: insert after LOC
    else
    {
        NEW->next = Loc->next;
        Loc->next = NEW;
    }

    ptr = start;
    cout << "After Insertion : ";
    while (ptr != NULL)
    {

        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    return 0;
}