#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> x(n), y(n);
        for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];

        long long ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            ans += 4LL * m;
            long long h = m - x[i + 1];
            long long w = m - y[i + 1];
            ans -= 2LL * (h + w);
        }
        ans += 4LL * m;
        cout << ans << '\n';
    }
    return 0;
}
