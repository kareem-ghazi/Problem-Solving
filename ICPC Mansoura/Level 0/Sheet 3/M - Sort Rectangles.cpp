#include <bits/stdc++.h>
using namespace std;

struct rec {
    long long index, area;
};

bool cmp (rec a, rec b)
{
    return a.area < b.area;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    rec rectangles[n];
    for (int i = 0; i < n; ++i) {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        rectangles[i].index = i + 1;
        rectangles[i].area = 1ll * (max({x1, x2, x3, x4}) - min({x1, x2, x3, x4})) * (max({y1, y2, y3, y4}) - min({y1, y2, y3, y4}));
    }

    sort(rectangles, rectangles + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << rectangles[i].index << " " << rectangles[i].area << endl;
    }
}
