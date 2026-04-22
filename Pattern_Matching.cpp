#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int l1 = s1.length();
    int l2 = s2.length();

    int max = l1 - l2;

    for (int k = 0; k <= max; k++)
    {
        int f = 1;

        for (int i = 0; i < l2; i++)
        {
            if (s2[i] != s1[i + k])
            {
                f = 0;
                break;
            }
        }

        if (f)
        {
            cout << "Found at index : " << k << endl;
            return 0;
        }
    }

    cout << "Pattern not found" << endl;

    return 0;
}