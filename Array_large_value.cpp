
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int position = 0;
    int index = 1;
    int max = INT_MIN;

    while (index <= n)
    {
        if (arr[index] > max)
        {
            max = arr[index];
            position = index;
        }
        index++;
    }

    cout << "Maximum value is : " << max << "  Found in position : " << index-1 << endl;

    return 0;
}
