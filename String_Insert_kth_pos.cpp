#include <iostream>
using namespace std;

int main()
{
    char T[100], S[50], result[150];

    cin.getline(T, 100);
    cin.getline(S, 50);

    int K;
    cin >> K;

    int i = 0, j = 0, k = 0;

    // copy first part of T
    while (i < K && T[i] != '\0')
    {
        result[k++] = T[i++];
    }

    // insert S
    while (S[j] != '\0')
    {
        result[k++] = S[j++];
    }

    // copy remaining T
    while (T[i] != '\0')
    {
        result[k++] = T[i++];
    }

    result[k] = '\0';

    cout << result;

    return 0;
}