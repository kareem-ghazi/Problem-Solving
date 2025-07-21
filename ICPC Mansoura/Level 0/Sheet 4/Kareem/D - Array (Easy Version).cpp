#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum{};

        for (; l <= r; ++l) {
            sum += arr[l];
        }

        cout << sum << endl;
    }

    return 0;
}