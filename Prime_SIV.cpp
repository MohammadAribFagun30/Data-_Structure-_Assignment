#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime[n + 1];

    // Initialize all as true
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    // Sieve
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Check
    if (isPrime[n])
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}