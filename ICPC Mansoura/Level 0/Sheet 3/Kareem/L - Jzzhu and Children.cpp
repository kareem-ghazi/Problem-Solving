#include <bits/stdc++.h>

using namespace std;

struct child {
    int ind, candies;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    deque<child> children(n, {0, 0});

    for (int i = 0; i < n; ++i) {
        cin >> children[i].candies;
        children[i].ind = i + 1;
    }

    while (children.size() != 1)
    {
        if (children[0].candies > m)
        {
            children[0].candies -= m;
            children.push_back(children[0]);
        }

        children.pop_front();
    }

    cout << children[0].ind << endl;
    return 0;
}