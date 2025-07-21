#include <bits/stdc++.h>

using namespace std;

struct cup {
    long double v, l;
};

bool compare(cup a, cup b)
{
    return (a.v / a.l) > (b.v / b.l);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long double n, l;
    cin >> n >> l;

    vector<cup> cups(n, {0, 0});

    for (int i = 0; i < n; ++i) {
        cin >> cups[i].v >> cups[i].l;
    }

    sort(cups.begin(), cups.end(), compare);

    long double result{};

    for (int i = 0; i < n; ++i) {
        if (cups[i].l <= l)
        {
            result += cups[i].v;
        } else if (l > 0) {
            result += cups[i].v * (l / cups[i].l);
        }

        l -= cups[i].l;
    }

    cout << result << endl;

    return 0;
}