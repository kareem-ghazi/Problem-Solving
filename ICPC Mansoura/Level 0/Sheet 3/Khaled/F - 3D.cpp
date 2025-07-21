#include <bits/stdc++.h>
using namespace std;

struct Star{
    int x, y, z;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    Star stars[n];
    for (int i = 0; i < n; ++i) {
        cin>>stars[i].x >> stars[i].y >> stars[i].z;
    }

    for (int i = 0; i < n; ++i) {
        int cntX = 0, cntY = 0,cntZ = 0;
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            if (stars[i].x == stars[j].x)
                cntX++;
            if (stars[i].y == stars[j].y)
                cntY++;
            if (stars[i].z == stars[j].z)
                cntZ++;
        }
        cout << cntX << " " << cntY << " " << cntZ << endl;
    }
}
