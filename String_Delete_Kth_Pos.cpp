#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin >> t;
    int l, k;

    string s;
    cin >> s;

    l = s.length();
    
    cout << "Enter the position : ";
    cin >> k;

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