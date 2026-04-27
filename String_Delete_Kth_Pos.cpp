#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin >> t;
    int l, k;
    cin >> k >> l;

    string ans = "";

    for (int i = 0; i < k; i++)
    {
        ans += t[i];
    }

    for (int i = l + k; i < t.length(); i++)
    {
        ans += t[i];
    }

    cout << ans << endl;

    return 0;
}