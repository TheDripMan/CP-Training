#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, t3;
ll x, a[200010], t;
ll* t2;

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        t = x - a[i];
        t2 = find(begin(a), end(a), t);
        if (t2 != end(a)) {
            t3 = t2 - begin(a) + 1;
            if (t3 != i+1) {
                cout << i+1 << " " << t3;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;

}
