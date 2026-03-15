#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int l1 = s1.length();
    int l2 = s2.length();

    int max = l1 - l2 + 1;
    int index = -1;
    int k = 1;

    while (k <= max)
    {
        int f = 1;

        for (int i = 1; i <= l2; i++)
        {
            if (s2[i] != s1[i + k - 1])
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            index = k;
            cout << "Found at index : " << index << endl;
            return 0;
        }

        k++;
    }

    index = 0;
    cout << "\nPattern not found" << endl;
    return 0;

    return 0;
}