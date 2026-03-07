#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Give Student number : " << endl;
    long long n, i;
    cin >> n;
    long long arr[n];
cout << "Taking Students Marks : " << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    long long c=0;

    for(i=1; i<=n; i++)
    {
        if(arr[i]>=40)
        {
            c++;
        }
    }
    cout << "Number of passed Students are : " <<c<< endl;



    return 0;
}