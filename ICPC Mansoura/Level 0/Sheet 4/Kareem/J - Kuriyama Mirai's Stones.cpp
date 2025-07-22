#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    vector<long long> prefv(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        prefv[i] = prefv[i - 1] + arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<long long> prefu(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        prefu[i] = prefu[i - 1] + arr[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << prefv[r] - prefv[l - 1] << endl;
        } else {
            cout << prefu[r] - prefu[l - 1] << endl;
        }
    }

    return 0;
}
