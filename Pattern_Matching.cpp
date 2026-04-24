#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t; // abcdef --- 6
    cin >> t;

    string p; // cd
    cin >> p;

    int r = t.length(); // 6
    int s = p.length(); // 2

    int k = 0;
    int max = r - s + 1; // 6 - 2 + 1 == 5
    int index = -1;

    while (k < max) // 2 < 5
    {
        int l;

        for (l = 1; l <= s; l++) // 2
        {
            if (p[l] != t[l + k]) // p[1] == d != t[3] == d
            {
                break;
            }
        }
        // l = 2

        if (l == s)
        {
            index = k; // 2
            break;
        }

        k = k + 1;
    }

    if (index > -1)
    {
        cout << "pattern found at index : " << index << endl;
    }
    else
    {
        cout << "Pattern not found\n";
    }

    return 0;
}