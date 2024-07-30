#include <bits/stdc++.h>

using namespace std;

int n;
long long a[100010], s[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    s[1] = max(s[0], a[1]);
    for (int i = 1; i <= n; i++) {
        s[i] = max(s[i-1], s[i-2] + a[i]);
    }
    cout << s[n];
    return 0;
}
