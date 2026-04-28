#include<bits/stdc++.h>
#define size 5
using namespace std;

int s[size];
int top = 0;

int menu(void)
{
    int choice = -1;
    while(choice < 0 || choice > 2)
    {
        cout<<"1--push"<<endl;
        cout<<"2--pop"<<endl;
        cout<<"0--exit"<<endl;

        cout<<"Enter Your choice : ";
        cin>>choice;
    }
    return choice;
}

void push(){
    if(top == size-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    int value;
    cout<<"Enter value: ";
    cin>>value;

    top++;
    s[top] = value;
}

void pop()
{
    if(top == 0)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    cout<<"Stack popped : "<< s[top]<<endl;
    top--;
}

void display()
{
    if(top ==0 )
    {
        cout<<"Stack is empty !!"<<endl;
        return;
    }
    cout<<"Stack elements : ";
    for(int i = 1; i <=top; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int choice;

    do {
        choice = menu();

        if(choice == 1)
        {
            push();
            display();
        }
        else if(choice == 2)
        {
            pop();
            display();
        }

    } while(choice != 0);

    cout<<"End of operation"<<endl;

    return 0;
}