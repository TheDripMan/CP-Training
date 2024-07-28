#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll k, gt;

ll c5(ll x) {
    ll cnt = 0;
    ll k = 5;
    while (k <= x) {
        cnt += x/k;
        k *= 5;
    }
    return cnt;
}

ll cal(ll k) {
    ll l = 1;
    ll r = 5 * 1e15;
    ll mid, res;
    while (l <= r) {
        mid = (l + r)/2;
        if (c5(mid) >= k) {
            res = mid;
            r = mid-1;
        } else {
            l = mid+1;

        }
    }
    return res;
}

int main() {
    cin >> k;
    cout << cal(k);
    return 0;
}
