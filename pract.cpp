#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int n;
    Node* next;
};

int main() {
    Node *start, *ptr;
    start = new Node();
     ptr = start;

    cout<<"element :";
    int x;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        cout << "input :";
        cin>> ptr->n;

        if(i!=x)
        {
            ptr->next = new Node();
            ptr = ptr->next;
        }
    }
    ptr->next = NULL;

     ptr = start ;

    while(ptr!=NULL)
    {
        cout<<ptr->n<<" ";
        ptr = ptr->next;

    }


    return 0;
}