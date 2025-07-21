#include <bits/stdc++.h>
using namespace std;

struct child {
    int val, pos;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector <child> children(n);
    for (int i = 0; i < n; ++i) {
        cin>>children[i].val;
        children[i].pos = i + 1;
    }

    int cnt = 0;
    while (cnt < n)
    {
        children[0].val -= m;
        if (children[0].val <= 0)
        {
            children.erase(children.begin());
            cnt++;
        }
        else
        {
            children.push_back(children[0]);
            children.erase(children.begin());
        }

        if (cnt == n)
            cout << children[0].pos;
    }

}
