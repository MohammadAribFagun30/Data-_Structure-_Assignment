#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, i, j;
    cin >> r >> c;
    int a[r][c];
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    i = 1;

    while (i <= r)
    {
        int sum = 0;
        for (j = 1; j <= c; j++)
        {
            sum += a[i][j];
        }
        cout << i << " Row sum of array is : " << sum << endl;
        i++;
    }

    return 0;
}