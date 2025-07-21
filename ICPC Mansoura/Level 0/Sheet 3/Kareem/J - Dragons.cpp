#include <bits/stdc++.h>

using namespace std;

struct dragon{
    int s, b;
};

bool cmp(dragon a, dragon b)
{
    return a.s < b.s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int s, n;
    cin >> s >> n;

    vector<dragon> dragons(n, {0, 0});

    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].s >> dragons[i].b;
    }

    sort(dragons.begin(), dragons.end(), cmp);

    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].s)
        {
            s += dragons[i].b;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}