#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T, P, Q;

    getline(cin, T);  // full sentence
    getline(cin, P);  // word to find
    getline(cin, Q);  // replacement word

    int pos = T.find(P); 
    cout<<pos<<endl;  // find position of P in T

    if (pos != -1)
    {
        T.replace(pos, P.length(), Q);  // replace P with Q
    }

    cout << T;

    return 0;
}