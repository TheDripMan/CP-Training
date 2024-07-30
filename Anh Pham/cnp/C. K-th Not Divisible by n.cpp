#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll n, k;

ll cal(ll n, ll k) {
    ll l = 1;
    ll r = 1e12;
    ll mid, res, p;
    while (l <= r) {
        mid = (l + r) / 2;
        p = mid - mid/n;
        if (p >= k) {
            res = mid;
            r = mid-1;
        } else {
            l = mid+1;
        }
    }
    return res;
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        cout << cal(n, k) << "\n";
    }
    return 0;
}
