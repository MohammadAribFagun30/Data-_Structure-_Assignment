// Towhid's Code
#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 10;

    Node *second = new Node();
    second->data = 20;

    Node *third = new Node();
    third->data = 30;

    // Node *fourth = new Node();
    // fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = NULL;
    // fourth->next = NULL;

    cout << "Before Inserting....\n";

    int value = 25;

    int mid, cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        cnt++;
        temp = temp->next;
    }
    cout << "NULL\n";

    if (cnt % 2 == 0)
    {
        mid = (cnt / 2) + 1;
    }
    else
    {
        mid = (cnt + 1) / 2;
    }

    temp = head;
    // set before location where we insert
    for (int i = 1; i < mid - 1; i++)
    {
        temp = temp->next;
    }

    Node *newNode = new Node();
    newNode->data = value;

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "AFter inserting....\n";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}