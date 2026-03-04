#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, p, i, j;
    cin >> r >> c;
    int arr[r][c];

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Array Before Interchange : " << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= p; j++)
        {
            if (i == j)
            {
                arr[i][j] = arr[i][j];
            }
            else if (i > j)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    cout << endl;
    cout << "Array After Interchange : " << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}