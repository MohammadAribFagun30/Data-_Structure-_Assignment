#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();

    int index;
    cout << "index to delete : ";
    cin>>index;

    while (len >= index)
    {
        s[index] = s[index + 1];
        index++;
    }
    len--;

    cout << "After Deleting : " << s;

    return 0;
}