#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout("RAND.DAT"); // file for writing
    if (!fout)
    {
        cout << "File not found";
    } 

    srand(time(0)); // random seed

    // Generate and write 100 random numbers
    for (int i = 0; i < 100; i++)
    {
        int num = rand() % 1000; // random number between 0-999
        fout << num << " ";
    }

    fout.close();

    ifstream fin("RAND.DAT"); // file for reading
    int x;

    cout << "Numbers in RAND.DAT:\n";

    // Read and display numbers
    while (fin >> x)
    {
        cout << x << " ";
    }

    fin.close();

    return 0;
}