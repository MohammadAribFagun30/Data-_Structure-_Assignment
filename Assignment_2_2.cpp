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

    int x;
    cin >> x;

    int position = 0;
    int index = 1;

    while (position == 0 && index <= n)
    {
        if (arr[index] == x)
        {
            position = index;
        }
        index++;
    }

    if (position == 0)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found in position at : " << position << endl;
    }

    return 0;
}