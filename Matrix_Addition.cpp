#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int r, c, p, i, j;
    cin >> r >>p>> c;
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

    int add[r][c];


    cout<<"After Addition : "<<endl;

     for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}