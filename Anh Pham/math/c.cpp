#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gt[1000010], cnt[1000010], pn, ct = 1;
ll mod = 1000000007;

ll p(int a, int b, ll c) {
    if (b == 0) return 1;
    ll x = p(a, b/2, c);
    x = x * x % c;
    if (b % 2 != 0) {
        x = x * a % c;
    }
    return x;
}

void setup() {
    gt[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        gt[i] = gt[i-1] * i % mod; 
    }
}

int main() {
    setup();
    
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i]-'a']++;
    }
    
    pn = gt[s.size()] % mod;
    for (int i = 0; i < 26; i++) {
        ct = ct * gt[cnt[i]] % mod;
    }
    cout << p(ct,mod - 2,mod) % mod * pn % mod;

    return 0;
}