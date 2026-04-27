#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    getline(cin, s);
    getline(cin, p);

    int s1 = s.length();
    int s2 = p.length();
    int max = s1 - s2 + 1;

    bool flag = false;
    int loc = -1;

    for (int i = 0; i < max; i++)
    {
        int l;

        for (l = 0; l < s2; l++)
        {
            if (p[l] != s[l + i])
            {
                break;
            }
        }

        if (l == s2)
        {
            flag = true;
            loc = i;
            break;
        }
    }

    if (flag)
    {
        cout << "Pattern found at : " << loc << endl;
    }
    else
    {
        cout << "Pattern not found\n";
        return 0;
    }

    string ans = "";

    string q;
    getline(cin, q);

    int s3 = q.length();

    for (int i = 0; i < loc; i++)
    {
        ans += s[i];
    }

    ans += q;

    for (int i = s3 + loc; i < s1; i++)
    {
        ans += s[i];
    }

    cout << ans << endl;

    return 0;
}