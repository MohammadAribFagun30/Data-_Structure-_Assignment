#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, p;
    cin >> n;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (i = 1; i <= n; i++)
    {
        p = 1;
        while (p <= n - i)
        {
            if (arr[p] > arr[p + 1])
            {
                int temp = arr[p];
                arr[p] = arr[p + 1];
                arr[p + 1] = temp;
            }
            p++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}