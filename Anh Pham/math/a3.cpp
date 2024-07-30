#include <bits/stdc++.h>

using namespace std;

multiset <int, greater <int> > s;
multiset <int, greater <int> > :: iterator it;
int n, m, x;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        it = s.lower_bound(x);
        if (it == s.end()) {
            cout << -1 << "\n";
        } else {
            cout << *it << "\n";
            s.erase(it);
        }
    }
    
    return 0;
}