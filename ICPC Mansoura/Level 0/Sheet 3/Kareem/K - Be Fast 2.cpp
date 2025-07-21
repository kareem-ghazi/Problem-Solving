#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int l, r, n;
    cin >> l >> r >> n;

    int result = (r - l + 1) - (r / n - (l - 1) / n);
    cout << result << endl;

    return 0;
}