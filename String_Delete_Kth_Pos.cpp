#include <iostream>
using namespace std;

int main()
{
    char T[1000], S[1000], result[1000];

    cin >> T >> S;

    int i = 0, k = 0;

    while (T[i] != '\0')
    {

        int j = 0;

        // check if S matches at position i
        while (S[j] != '\0' && T[i + j] == S[j])
        {
            j++;
        }

        // if full match found
        if (S[j] == '\0')
        {
            
            i = i + j; // skip S
        }
        else
        {
            result[k++] = T[i];
            i++;
        }
    }

    result[k] = '\0';

    cout << result;

    return 0;
}