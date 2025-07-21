#include <bits/stdc++.h>
using namespace std;

string f(int a, string s1, string s2)
{
    if (a == 1)
        return s1 + s2;
    else
        return s2 + s1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    cout << f(1, f(1, f(0, s1, s2) + s1, s2), s1 + f(0, s1 + s2, f(1, s2, s1)));
}