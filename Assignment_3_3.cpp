#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, p, i, j;
    cin >> r >> p >> c;
    int arr[r][p];

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= p; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Array-1 : " << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= p; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int brr[p][c];

    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cin >> brr[i][j];
        }
    }
    cout << endl;

    cout << "Array-2 : " << endl;

    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int multiply[r][c];

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            multiply[i][j] = 0;
            for (int k = 1; k <= p; k++)
            {
                multiply[i][j] = multiply[i][j] + arr[i][k] * brr[k][j];
            }
        }
    }

    cout<<"After Multiplies :"<<endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}