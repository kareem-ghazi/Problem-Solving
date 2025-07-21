#include <bits/stdc++.h>
using namespace std;

struct Dragon
{
    int x, y;
};

bool cmp(Dragon a, Dragon b)
{
    return a.x < b.x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int s,n;
    cin>>s>>n;
    Dragon dragons[n];
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].x >> dragons[i].y;
    }

    sort(dragons, dragons+n, cmp);
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].x)
            s += dragons[i].y;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
