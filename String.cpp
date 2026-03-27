#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    int i = 0;
    // Length of String
    while (s1[i] != '\0')
    {
        i++;
    }
    cout << "Length Of the String is : " << i << endl;

    // Copy String--

    cout << "Real String : " << s1 << endl;
    string s2 = s1;

    cout << "Copied String : " << s2 << endl;

    // Concatinate string--

    string s3, s4;
    cout << "String 1 : ";
    getline(cin, s3);
    cout << "String 2 : ";
    getline(cin, s4);

    cout << "After Concatinating : " << (s3 + s4) << endl;

    // Comparing String--

    string s5, s6;
    cout << "String 1 : ";
    getline(cin, s5);
    cout << "String 2 : ";
    getline(cin, s6);

    if (s5 == s6)
    {
        cout << "They Are Equal !" << endl;
    }
    else if (s5 > s6)
    {
        cout << "String 1 is bigger" << endl;
    }
    else
    {
        cout << "String 2 is bigger" << endl;
    }
    // Reverse a String--

    string s7;
    getline(cin, s7);
    int i = 0;

    while (s7[i] != '\0')
    {
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << s7[j];
    }

    return 0;
}