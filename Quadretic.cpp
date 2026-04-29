#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double d = (double)(b * b) - (4 * a * c);

    if (d > 0)
    {
        double r1 = (double)(-b + (sqrt(d))) / (2 * a);
        cout << "First root : " << r1 << endl;
        double r2 =(double) (-b - (sqrt(d))) / (2 * a);
        cout << "Second root : " << r2 << endl;
    }
    else if (d == 0)
    {
        double r = (double)(-b / (2 * a));
        cout << "Unique root : " << r << endl;
    }
    else
        cout << "No Solution" << endl;
    return 0;
}