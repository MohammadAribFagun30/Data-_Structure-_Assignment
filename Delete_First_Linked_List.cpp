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
    cout<<"Enter element number : ";
    cin >> n;

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

    cout << "List before delete : ";

    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    cout << endl;

if (start == NULL)
{
    cout << "List is empty, nothing to delete";
}
else
{
    Node *temp = start; 
    start = start->next; 
    delete temp;
}

cout << "After deleting from First : ";

ptr = start;

while (ptr != NULL)
{
    cout << ptr->num << " ";
    ptr = ptr->next;
}


}
     
