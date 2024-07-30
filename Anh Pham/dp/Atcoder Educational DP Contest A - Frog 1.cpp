#include <bits/stdc++.h>

using namespace std;

int n, k;
long long h[100010], s[100010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i];

    s[1] = 0;
    s[2] = abs(h[1] - h[2]);
    for (int i = 3; i <= n; i++) {
        s[i] = 1e9;
        for (int j = 1; j <= min(i-1, k); j++) {
            s[i] = min(s[i-j] + abs(h[i] - h[i-j]), s[i]);
        }
    }

    cout << s[n];
    return 0;
}
