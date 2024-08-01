#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
string s[1010];
int n, dp[1010][1010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] = " " + s[i];
    }

    if (s[1][1] != '*') dp[1][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i][j] != '*' && (i != 1 || j != 1)) {
                dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % mod;
            }
        }
    }
    cout << dp[n][n];


    return 0;
}

