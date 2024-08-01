#include <bits/stdc++.h>

using namespace std;

int a[5][100010];
int dp[5][100010], m;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> a[j][i];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                if (j != k) {
                    dp[j][i] = max(dp[j][i], dp[k][i-1] + a[j][i]);
                }
            }
        }
    }

    for (int i = 1; i <= 3; i++) {
        m = max(m, dp[i][n]);
    }
    cout << m;

    return 0;
}
