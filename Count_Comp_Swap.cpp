#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "CANDLE";
    int n = s.length();

    int C = 0; // comparisons
    int D = 0; // swaps

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            C++; // we compare two letters

            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]); // swap if wrong order
                D++; // count swap
            }
        }
    }

    cout << "Sorted string: " << s << endl;
    cout << "Comparisons (C): " << C << endl;
    cout << "Swaps (D): " << D << endl;

    return 0;
}