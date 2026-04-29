#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *header = new Node(); // header node
    header->next = header;     // initially points to itself

    Node *ptr = header;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Node *temp = new Node();
        cout << "Enter value: ";
        cin >> temp->data;

        ptr->next = temp;
        ptr = temp;
    }

    ptr->next = header; // make circular

    // Display
    cout << "Circular Header Linked List: ";
    ptr = header->next;

    while (ptr != header)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}