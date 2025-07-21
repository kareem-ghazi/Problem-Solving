#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;
    cin >> n;
    long long result{};

    for (long long i = 0; i <= n; i++)
    {
        result += i * i;
    }

    cout << result << endl;

    return 0;
}