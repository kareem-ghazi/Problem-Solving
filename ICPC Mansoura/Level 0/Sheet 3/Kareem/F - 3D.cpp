#include <bits/stdc++.h>

using namespace std;

struct star{
    int x, y, z;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    vector<star> stars(t, {0, 0, 0});

    for (int i = 0; i < t; ++i) {
        cin >> stars[i].x >> stars[i].y >> stars[i].z;
    }

    for (int i = 0; i < t; ++i) {
        int cx{}, cy{}, cz{};

        for (int j = 0; j < t; ++j) {
            if (i == j)
                continue;

            if (stars[i].x == stars[j].x)
                cx++;

            if (stars[i].y == stars[j].y)
                cy++;

            if (stars[i].z == stars[j].z)
                cz++;
        }

        cout << cx << " " << cy << " " << cz << endl;
    }

    return 0;
}