#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, y, res = 2e9, i2;
int b[100010], c[100010];

int cal(int y) {
    int l = 0;
    int r = n-1;
    int mid, res = n-1;
    while (l <= r) {
        mid = (l + r)/2;
            if (b[mid] < y) {
                l = mid+1;
            } else {
                r = mid-1;
                res = mid;
            }
        }
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    sort(b, b+n);

    for (int i = 0; i < n; i++) {
        y = -c[i];
        i2 = cal(y);
        res = min(res, abs(b[i2] + c[i]));
        if (i2 > 0) {
            res = min(res, abs(b[i2-1] + c[i]));
        }

    }
    cout << res;
    return 0;
}
