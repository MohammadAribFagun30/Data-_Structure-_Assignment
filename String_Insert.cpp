#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    cout << "Item to insert : ";
    char item;
    cin >> item;

    int index;
    cout << "Inserting in index : ";
    cin >> index;

    int len = s.length();
    s.resize(len + 1);
    while (len >= index)
    {
        s[len] = s[len - 1];

        len--;
    }

    s[index] = item;

    cout << "After Inserting in String : " << s;

    return 0;
}