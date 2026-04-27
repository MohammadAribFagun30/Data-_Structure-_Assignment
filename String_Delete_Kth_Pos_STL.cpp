#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, S;
    cin >> T >> S;

    int pos = T.find(S);

    while (pos != -1) {
        T.erase(pos, S.length());
        pos = T.find(S);
    }

    cout << T;

    return 0;
}