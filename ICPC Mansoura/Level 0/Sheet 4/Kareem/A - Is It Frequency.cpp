#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n, 0);
    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; ++i) {
        cout << freq[i] << endl;
    }

    return 0;
}