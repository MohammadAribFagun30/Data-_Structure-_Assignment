#include <bits/stdc++.h>
using namespace std;
int main()
{
     string t;
    cin >> t;
    string s;
    cin >> s;

   
    int k;
    cin >> k;

    string ans = "";

    for (int i = 0; i < k; i++)
    {
        ans += t[i];
    }

    ans += s;

    for (int i = k; i < t.length(); i++)
    {
        ans += t[i];
    }
    cout << "After inserting : ";

    cout << ans << endl;

    return 0;
}