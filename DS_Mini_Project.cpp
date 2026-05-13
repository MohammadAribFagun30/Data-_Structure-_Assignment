#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
};

Node *start = NULL, *ptr, *NEW;

int menu(void)
{
    cout << endl;

    int choice = -1;

    while (choice < 0 || choice > 3)
    {
        cout << "1--insert" << endl;
        cout << "2--delete" << endl;
        cout << "3--search" << endl;
        cout << "0--exit" << endl;

        cout << endl;
        cout << "Enter Your choice : ";
        cin >> choice;
    }

    return choice;
}

void insert()
{
    cout << endl;

    cout << "Insert number : ";
    int x;
    cin >> x;

    NEW = new Node();
    NEW->num = x;
    NEW->next = NULL;

    
    if (start == NULL || x < start->num)
    {
        NEW->next = start;
        start = NEW;
    }
    else
    {
        ptr = start;

       
        while (ptr->next != NULL && ptr->next->num < x)
        {
            ptr = ptr->next;
        }

        NEW->next = ptr->next;
        ptr->next = NEW;
    }
}

void deleteing()
{
    cout << endl;

    cout << "Input number to delete : ";
    int x;
    cin >> x;

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

    if (ptr == NULL)
    {
        cout << "Number not found!" << endl;
        return;
    }

    Node *temp;

    if (pos == 1)
    {
        temp = start;
        start = start->next;
        delete temp;
    }
    else
    {
        ptr = start;

        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }

        temp = ptr->next;
        ptr->next = temp->next;

        delete temp;
    }
}

void searching()
{
    cout << endl;

    int ITEM;

    cout << "Enter element to search: ";
    cin >> ITEM;

    ptr = start;

    int position = 1;
    bool found = false;

    while (ptr != NULL)
    {
        if (ptr->num == ITEM)
        {
            cout << "Item found..!" << endl;
            cout << "Position : " << position << endl;
            cout << "Address : " << ptr << endl;

            found = true;
            break;
        }

        ptr = ptr->next;
        position++;
    }

    if (!found)
    {
        cout << "Item not found in the list";
    }
}

void display()
{
    cout << endl;

    cout << "After Operation : ";

    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    cout << endl;
}

int main()
{
    start = new Node();
    ptr = start;

    cout << "How many elements : ";

    int n;
    cin >> n;

    srand(time(0));

    for (int i = 1; i <= n; i++)
    {
        ptr->num = rand() % 100;

        if (i != n)
        {
            ptr->next = new Node();
            ptr = ptr->next;
        }
    }

    ptr->next = NULL;

    
    cout << "Original Linked List : ";

    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    cout << endl;

    
    Node *i, *j;

    for (i = start; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->num > j->num)
            {
                int temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    
    cout << "Sorted Linked List : ";

    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->num << " ";
        ptr = ptr->next;
    }

    cout << endl;

    int choice;

    do
    {
        choice = menu();

        if (choice == 1)
        {
            insert();
            display();
        }
        else if (choice == 2)
        {
            deleteing();
            display();
        }
        else if (choice == 3)
        {
            searching();
        }

    } while (choice != 0);

    cout << "End of operation" << endl;

    return 0;
}