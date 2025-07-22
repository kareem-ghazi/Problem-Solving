#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int l = 0, r = n - 1;

        while (l < r)
        {
            cout << arr[l] << " " << arr[r] << " ";

            l++;
            r--;
        }

        if (n % 2 == 1)
            cout << arr[n / 2];

        cout << endl;
    }

    return 0;
}
