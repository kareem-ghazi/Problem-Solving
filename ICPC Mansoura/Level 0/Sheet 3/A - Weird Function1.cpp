#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    return 2*x+3;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        int x;
        cin>>x;
    cout<<f(f(f(x))) + 2*f(x*f(x));
}