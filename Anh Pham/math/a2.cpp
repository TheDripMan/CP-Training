#include <bits/stdc++.h>

using namespace std;

int n, m, k, a1[200010], a2[200010], cnt = 0, a3[200010], j; 

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < m; i++) cin >> a2[i];

    sort(a1, a1 + n);
    sort(a2, a2 + m);

    for (int i = 0 ; i < n; i++) {
        for (; j < m && a2[j] < a1[i] - k; j++);
        if (a2[j] >= a1[i] - k && a2[j] <= a1[i]+k) {
            cnt++;
            j++;
        }
    }
    cout << cnt;

    return 0;
}