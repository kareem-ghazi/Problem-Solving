#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    vector<long long> upd(200002, 0);

    // Partial summation of 1 at L and -1 at R + 1.
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;

        upd[l]++;
        upd[r + 1]--;
    }

    // Prefix Summation to find intersecting ranges.
    for (int i = 1; i <= 200002; ++i) {
        upd[i] += upd[i - 1];
    }

    vector<int> ok(200002, 0);

    // True/false array where a specific distance is ok for at least k sensors.
    for (int i = 1; i <= 200002; ++i) {
        if (upd[i] >= k)
            ok[i] = 1;
    }

    // Prefix summation to find intersecting ok distances.
    for (int i = 1; i < 200002; ++i) {
        ok[i] += ok[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << ok[b] - ok[a - 1] << endl;
    }

    return 0;
}
