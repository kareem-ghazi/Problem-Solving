#include <bits/stdc++.h>

using namespace std;

struct element{
    string a, b, c, d;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    vector<element> elms(t, {"", "", "", ""});

    for (int i = 0; i < t; ++i) {
        cin >> elms[i].a >> elms[i].b >> elms[i].c >> elms[i].d;
    }

    for (int i = 1; i < t; ++i) {
        if (elms[0].a != elms[i].a || elms[0].b != elms[i].b
        || elms[0].c != elms[i].c || elms[0].d != elms[i].d)
        {
            cout << "you were right" << endl;
            return 0;
        }
    }

    cout << "Empedocles was right" << endl;

    return 0;
}