#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, gt[2000010];

ll p(ll a, ll b, ll c) {
    if (b == 0) return 1;
    ll x = p(a,b/2,c);
    x = x * x % c;
    if (b % 2 != 0) {
        x = x * a % c;
    }
    return x;
}

void init(int c) {
    gt[0] = 1;
    for (int i = 1; i <= 2000000; i++) {
        gt[i] = gt[i-1] * i % c;
    }
}

ll cal(int a, int b, int c) {
    return (gt[a] * p(gt[b], c-2, c)) % c * p(gt[a-b], c-2, c) % c;
}

int main() {
    init(1000000007);
    string s;
    cin >> s;
    int m = s.size();


    return 0;
}
