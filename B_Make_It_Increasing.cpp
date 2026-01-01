#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long c = 0;
        bool flag = false;

        // RIGHT to LEFT traversal (important)
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1]) {
                if (a[i] == 0) {
                    flag = true;
                    break;
                }
                a[i] /= 2;
                c++;
            }
            if (flag) break;
        }

        if (flag)
            cout << -1 << endl;
        else
            cout << c << endl;
    }

    return 0;
}
