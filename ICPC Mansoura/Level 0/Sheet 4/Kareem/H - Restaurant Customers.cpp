#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> customers(100001, 0);

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        customers[a]++;
        customers[b + 1]--;
    }

    int maxi = INT_MIN;

    for (int i = 1; i <= 100001; ++i) {
        customers[i] += customers[i - 1];

        maxi = max(customers[i], maxi);
    }

    cout << maxi << endl;

    return 0;
}
