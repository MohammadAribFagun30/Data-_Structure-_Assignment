#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5;
    
    cout<<&a;
    cout<<endl;
    
    int *x = &a;

    cout<<*x; 
    return 0;
}