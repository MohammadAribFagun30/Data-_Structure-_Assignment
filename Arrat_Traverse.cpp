#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    k = 1;
    cout << "Array is ";
    while (k <= n)
    {
        cout << a[k] << " ";
        k++;
    }

    return 0;
}