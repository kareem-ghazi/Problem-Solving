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

        int arr[n];

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        reverse(arr, arr + n);

        if (arr[0] == arr[n - 1])
        {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[n - 1] << " ";
            for (int i = 1; i < n - 1; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}