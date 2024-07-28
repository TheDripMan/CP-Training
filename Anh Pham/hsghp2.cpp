#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, t, a[100010], u, v, N = 1e6;
bool p[1000010];

void init() {
    for (ll i = 1; i <= N; i++) p[i] = true;
    p[0] = p[1] = false;
    for (ll i = 2; i <= N; i++) {
        for (ll j = i * i; j <= N; j += i) {
            p[j] = false;
        }
    }
}

bool c(ll x) {
    if (x > 1e6) {
        for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
        }
        return x > 1;
    } else {
        return p[x];
    }
}

bool c2(ll x) {
    for (ll i = 1; i <= 9; i++) {
        if (c(10 * x + i)) return true;
    }
    return false;
}

bool c3(ll x) {
    while (x > 0) {
        if (!c(x)) return false;
        x /= 10;
    }
    return true;
}

ll cal(ll u, ll v) {
    ll cnt = 0;
    for (ll i = u; i <= v; i++) {
        if (c(a[i]) && c2(a[i]) && c3(a[i])) cnt++;
    }
    return cnt;
}

int main() {
    init();
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    cin >> t;
    for (ll i = 1; i <= t; i++) {
        cin >> u >> v;
        cout << cal(u, v) << "\n";
    }
    return 0;
}
