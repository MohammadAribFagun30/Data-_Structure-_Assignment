#include <bits/stdc++.h>
using namespace std;
int main()
{
    char T[100], P[50], Q[50];
    cin.getline(T, 100);
    cin.getline(P, 50);
    cin.getline(Q, 50);
    int i = 0, j, k, found = 0;
    while (T[i] != '  \0  ')
    {
        j = 0;
        while (P[j] != 0 && T[i + j] == P[j])
        {
            j++;
        }
        if (P[j] == '  \0  ' && found == 0)
        {
            k = 0;
            while (Q[k] != 0)
            {
                cout << Q[k];
                k++;
            }
            i = i + j;
            found = 1;
        }
        else
        {
            cout << T[i];
            i++;
        }
    }
    return 0;
}