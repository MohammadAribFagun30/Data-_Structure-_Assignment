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

    int count_zero = 0;
    int cout_nonzero = 0;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (a[i][j] == 0)
            {
                count_zero++;
            }
        }
    }

    if (count_zero > (r * c) / 2)
    {
        cout << "It is a Sparse Matrix !!" << endl;
    }
    else
    {
        cout << "No,it is not a Sparse Matrix !" << endl;
    }
}