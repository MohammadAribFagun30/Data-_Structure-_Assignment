#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t, r;
    getline(cin, t);
    getline(cin, r);

    int p = t.length();
    int q = r.length();

    int ind = -1;
    for(int i = 1; i <= p - q + 1; i++)
    {
        int j;
        for(j = 1; j <= q; j++)
        {
            if(t[i + j - 2] != r[j - 1]) break;
        }
        if(j > q)
        {
            ind = i;
            break;
        }
    }
    if(ind == -1) cout <<"Pattern is not found in string" << endl;
    else cout << "Pattern is found at " << ind <<" index" << endl;

    return 0;
}