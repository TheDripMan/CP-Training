#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, t, l, r;
ll a[100010], q[100010];

void init() {
    for (int i = 1; i <= n; i++) {
        q[i] = q[i-1] + a[i];
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    init();
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> l >> r;
        cout << q[r] - q[l-1] << "\n";

    }
    return 0;
}
