#include <bits/stdc++.h>

using namespace std;

int n, a[200010], cnt = 1, tmp;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    tmp = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] != tmp) {
            tmp = a[i];
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}