#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;
};

bool compare(point a, point b)
{
    return a.y > b.y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    vector<point> points(t, {0, 0});

    for (int i = 0; i < t; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points.begin(), points.end(), compare);

    for (point p : points)
    {
        cout << p.x << " " << p.y << endl;
    }

    return 0;
}