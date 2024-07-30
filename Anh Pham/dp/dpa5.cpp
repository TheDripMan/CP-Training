#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
ll a[1000010], q[1000010], m[1000010], res;

void init() {
    for (int i = 1; i <= n; i++) {
        q[i] = q[i-1] + a[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    init();
    m[0] = q[0];
    for (int i = 1; i <= n; i++) {
        m[i] = min(q[i], m[i-1]);
    }
    for (int i = 1; i <= n; i++) {
        res = max(res, q[i] - m[i-1]);
    }
    cout << res;
    return 0;
}
