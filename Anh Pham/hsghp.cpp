#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n + 1);
    unordered_set<long long> seen;
    long long ai = 0, aj = 0;
    long long p = 0, q = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        long long complement = 2 * k - a[i];
        if (seen.find(complement) != seen.end()) {
            ai = a[i];
            aj = complement;
            break;
        }
        seen.insert(a[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == ai) p = i;
        else if (a[i] == aj) q = i;
    }

    cout << p << " " << q;
    return 0;
}
