#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

int main()
{
    Node *start = NULL, *ptr, *temp;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        temp = new Node();
        cout << "Enter value: ";
        cin >> temp->data;

        temp->next = NULL;

        if (start == NULL)
        {
            temp->prev = NULL;
            start = temp;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = temp;
            temp->prev = ptr;
        }
    }

    // Display forward
    cout << "Doubly Linked List (forward): ";
    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}