#include <bits/stdc++.h>

using namespace std;

int n, m, a[15010], l, r;

int xe(int x) {
    int cnt = 0, xe = 1;
    for (int i = 1; i <= n; i++) {
        cnt += a[i];
        if (cnt > x) {
            cnt = a[i];
            xe++;
        }
    }
    return xe;
}

int cal(int l, int r) {
    int mid, res = r;
    while (l <= r) {
        mid = (l + r)/2;
        if (xe(mid) == m) res = min(res, mid);

        if (xe(mid) > m) {
            l = mid+1;
        } else {
            r = mid-1;
        }

    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }

    cout << cal(l, r);
    return 0;
}
