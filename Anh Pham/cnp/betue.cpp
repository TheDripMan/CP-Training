#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a[300010], r = 0;
int m;

ll v(ll x, ll y) {
    if (x % y == 0) return x/y;
    else return x/y +1;
}

ll c(ll x) {
    ll cnt = 0;
    for (int i = 1; i <= m; i++) {
        cnt += v(a[i], x);
    }
    return cnt;
}

ll cal(ll r) {
    ll l = 1;
    ll mid, res, q;
    while (l <= r) {
        mid = (l + r) / 2;
        q = c(mid);
        if (q <= n) {
            r = mid-1;
            res = mid;
        } else {
            l = mid+1;
        }
    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
        r = max(r, a[i]);
    }

    cout << cal(r);

    return 0;
}
