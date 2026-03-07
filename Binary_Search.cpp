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
    int first_position = 1;
    int last_position = n;

    int begin = first_position;
    int end = last_position;
    int mid = int((begin + end) / 2);

    int x;
    cin >> x;
    int position;

    while (begin <= end && arr[mid] != x)
    {
        if (x < mid)
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
        }
        mid = int((begin + end) / 2);

        if (arr[mid] == x)
        {
            position = mid;
        }
        else
        {
            position = 0;
        }
    }

    if (position == 0)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found in position : " << position << endl;
    }

    return 0;
}