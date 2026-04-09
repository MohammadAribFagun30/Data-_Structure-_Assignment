#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;

    cout << &a;

    cout << endl;

    int *x = &a;

    cin >> *x;
    return 0;
}