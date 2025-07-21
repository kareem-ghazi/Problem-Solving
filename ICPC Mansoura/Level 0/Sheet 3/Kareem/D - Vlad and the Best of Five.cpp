#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int a = 0, b = 0;

        for (char c : s)
        {
            if (c == 'A')
                a++;
            else
                b++;
        }

        cout << (a > b ? 'A' : 'B') << endl;
    }

    return 0;
}