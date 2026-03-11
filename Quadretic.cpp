#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        int r1 = (-b + (sqrt(d))) / (2 * a);
        cout << "First root : " << r1 << endl;
        int r2 = (-b - (sqrt(d))) / (2 * a);
        cout << "Second root : " << r2 << endl;
    }
    else if (d == 0)
    {
        int r = -b / (2 * a);
        cout << "Unique root : " << r << endl;
    }
    else
        cout << "No Solution" << endl;
    return 0;
}