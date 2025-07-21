#include <bits/stdc++.h>

using namespace std;

struct point {
    long long x, y;
};

struct rectangle{
    point a, b, c, d;
    int ind;
    long long area;
};

bool compare(rectangle rect1, rectangle rect2)
{
    return rect1.area < rect2.area;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<rectangle> rects(n, {0, 0, 0, 0, 0, 0, 0, 0});

    for (int i = 0; i < n; ++i) {
        cin >> rects[i].a.x >> rects[i].a.y >> rects[i].b.x >> rects[i].b.y
        >> rects[i].c.x >> rects[i].c.y >> rects[i].d.x >> rects[i].d.y;
        rects[i].area = abs(rects[i].a.x - rects[i].b.x) * abs(rects[i].a.y - rects[i].c.y);
        rects[i].ind = i + 1;
    }

    sort(rects.begin(), rects.end(), compare);

    for (int i = 0; i < n; ++i) {
        cout << rects[i].ind << " " << rects[i].area << endl;
    }

    return 0;
}
