#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T, S;
    getline(cin, T);
    getline(cin, S);

    int K;
    cin >> K;

    T.insert(K, S);

    cout << T;
}