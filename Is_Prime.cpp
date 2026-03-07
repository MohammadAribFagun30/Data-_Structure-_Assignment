#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, f = 0;
    cin >> n;

    if(n<=2)
    {

    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << n << " is prime" << endl;
    else
        cout << n << " not prime" << endl;

    return 0;
}