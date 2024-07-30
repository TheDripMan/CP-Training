#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll t, x, fib[1000];
ll mod = 1e9+7;

void init() {
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 1000; i++) {
        fib[i] = (fib[i-1] + fib[i-2]) % mod;
    }
}

int main(){
    init();
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x;
        cout << fib[x] << "\n";
    }
    return 0;
}
