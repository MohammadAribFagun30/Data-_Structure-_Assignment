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

    j = 1;

    while (j <= c)
    {
        int sum = 0;
        for (i = 1; i <= r; i++)
        {
            sum += a[i][j];
        }
        cout << j << " Colum sum of array is : " << sum << endl;
        j++;
    }

    return 0;
}