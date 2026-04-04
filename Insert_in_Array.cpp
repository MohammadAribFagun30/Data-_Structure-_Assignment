#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];

    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before inserting a elemnt " << endl;

    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int t = n;
    int position, x;
    cout << "Inserting an element in position : ";
    cin >> position;
    cout << "Insert : ";
    cin >> x;

    while (t >= position)
    {
        arr[t + 1] = arr[t];
        t--;
    }
    arr[position] = x;

    cout << "After Inserting : " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}