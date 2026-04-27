#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();

    int index;
    cout << "index to delete : ";
    cin >> index;

    for (int i = index; i < len - 1; i++)
    {
        s[i] = s[i + 1];
    }

    s.resize(len - 1);

    cout << "After Deleting : " << s;

    return 0;
}