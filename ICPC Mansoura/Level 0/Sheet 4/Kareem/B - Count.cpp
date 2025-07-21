#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;

        int count{};

        for (; l <= r; ++l) {
            if (arr[l] == x) count++;
        }

        cout << count << endl;
    }

    return 0;
}