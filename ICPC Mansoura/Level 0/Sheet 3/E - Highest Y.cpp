#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
};

bool cmp (point a, point b)
{
    if (a.y > b.y)
        return true;
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    point points[n];
    for (int i = 0; i < n; ++i) {
        cin>>points[i].x>>points[i].y;
    }

    sort(points, points+n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << points[i].x << " " << points[i].y << endl;
    }
}
