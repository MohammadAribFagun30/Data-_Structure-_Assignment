#include <bits/stdc++.h>
using namespace std;

// Main Method :
struct Node
{
    int val;
    Node *next;
};

Node *head = 0;

void insertFirst(int item)
{

    Node *nn = new Node;
    nn->val = item;
    nn->next = head;
    head = nn;
}
void display()
{

    Node *ptr = head;
    while (ptr != 0)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }
}

int main()
{
    insertFirst(5);
    insertFirst(6);
    insertFirst(3);
    insertFirst(2);
    insertFirst(1);
    display();
    // print--> 1 2 3 6 5
}