#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, x;
ll k, a[100010];

int cal(int x) {
    int l = 1;
    int r = n;
    int mid, res = n+1;
    while (l <= r) {
        mid = (l + r)/2;
        if (x <= a[mid]) {
            r = mid-1;
            res = mid;
        } else {
            l = mid+1;
        }
    }
    return res;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> x;
        cout << cal(x) << "\n";
    }
    return 0;
}
