#include <iostream>

using namespace std;

int x, n, dp[1000005], c[105];
int mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> c[i];

    dp[0] = 1;


    for (int j = 1; j <= n; j++) {

            for (int i = 1; i <= x; i++) {
        if (i >= c[j]) {
                dp[i] = (dp[i] + dp[i-c[j]]);
                dp[i] %= mod;
            }
    }
        }

    cout << dp[x];
    return 0;
}
