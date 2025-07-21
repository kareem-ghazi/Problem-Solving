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
        vector<int> freq(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int value = -1;

        for (int i = 1; i <= n; ++i) {
            if (freq[i] >= 3)
            {
                value = i;
                break;
            }
        }
        
        cout << value << endl;
    }

    return 0;
}