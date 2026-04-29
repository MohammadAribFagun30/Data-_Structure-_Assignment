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

    // create linked list
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

    // find middle using slow & fast pointer
    Node *slow = start;
    Node *fast = start;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // move 1 step
        fast = fast->next->next; // move 2 steps
    }

    cout << "Middle element: " << slow->num << endl;

    return 0;
}