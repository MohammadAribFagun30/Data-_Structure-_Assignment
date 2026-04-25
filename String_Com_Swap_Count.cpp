#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "CANDLE";
    int n = s.length();
    int c = 0, d = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            c++;
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
                d++;
            }
        }
    }

    cout <<"String Sorted : "<<  s << endl;
    cout << "Comparison : " << c << endl;
    cout << "Swap : " << d << endl;

    return 0;
}