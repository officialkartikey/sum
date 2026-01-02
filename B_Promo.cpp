#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort descending
    sort(a.begin(), a.end(), greater<long long>());

    // Prefix sum
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }

    while (q--) {
        int x, y;
        cin >> x >> y;

        // sum of smallest y among top x
        // = sum of top x − sum of top (x − y)
        long long ans = pref[x] - pref[x - y];
        cout << ans << endl;
    }

    return 0;
}
