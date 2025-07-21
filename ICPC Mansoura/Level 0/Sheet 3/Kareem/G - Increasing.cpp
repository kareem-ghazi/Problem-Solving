#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        map<int, int> freq;

        int n;
        cin >> n;

        while (n--)
        {
            int x;
            cin >> x;

            freq[x]++;
        }

        bool result = true;

        for (auto pair : freq) {
            if (pair.second > 1)
            {
                result = false;
                break;
            }
        }

        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}