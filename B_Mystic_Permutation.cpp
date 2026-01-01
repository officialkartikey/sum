#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        if (n == 1) {
            cout << -1 << '\n';
            continue;
        }

        set<int> s;
        for (int i = 1; i <= n; i++) s.insert(i);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            auto it = s.begin();
            if (*it == p[i]) {
                it++;
            }
            q[i] = *it;
            s.erase(it);
        }

        // final safety check
        for (int i = 0; i < n; i++) {
            if (q[i] == p[i]) {
                swap(q[i], q[i - 1]);
                break;
            }
        }

        for (int x : q) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
