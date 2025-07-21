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

        string p;
        cin >> p;

        int coins{};

        for (int i = 0; i < n; ++i) {
            if (p[i] == '@')
                coins++;

            if (p[i + 1] == '*' && p[i + 2] == '*')
                break;

            if (p[i + 1] == '*')
                i++;
            else if (p[i + 1] == '.' && p[i + 2] == '@')
                i++;
            else if (p[i + 1] == '.' && p[i + 2] == '.')
                i++;
        }

        cout << coins << endl;
    }

    return 0;
}