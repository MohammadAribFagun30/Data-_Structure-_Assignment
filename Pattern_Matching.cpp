#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t; 
    cin >> t;

    string p;
    cin >> p;

    int r = t.length();
    int s = p.length();

    int k = 0;
    int max = r - s + 1;
    int index = -1;

    while (k < max)
    {
        int l;

        for (l = 1; l <= s; l++) 
        {
            if (p[l] != t[l + k])
            {
                break;
            }
        }
    

        if (l == s)
        {
            index = k; 
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