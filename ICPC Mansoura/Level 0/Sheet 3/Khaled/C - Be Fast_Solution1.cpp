// Solution 1 (better in complexity)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;
    cin>>n;
    cout << (n * (n + 1) * (2 * n + 1)) / 6;
}
