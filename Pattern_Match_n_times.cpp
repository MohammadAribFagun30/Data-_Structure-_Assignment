#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string p;
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
                    break;
            }

            if (l == s2)
            {
                flag = true;
                loc = i;
                break;
            }
        }

        string q;
        getline(cin, q);

        // ✅ If not found, just print original string
        if (!flag)
        {
            cout << s << endl;
            continue;
        }

        string ans = "";

        // before match
        for (int i = 0; i < loc; i++)
            ans += s[i];

        // replacement
        ans += q;

        // after match (FIXED HERE)
        for (int i = loc + s2; i < s1; i++)
            ans += s[i];

        cout << ans << endl;
    }

    return 0;
}