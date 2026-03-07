#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Deleting : " << endl;
    for (int i = 1; i <= n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    int t = n;
    int index = 3;

    for (int i = index; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "After deleting a value : " << endl;
    for (int i = 1; i <= n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}