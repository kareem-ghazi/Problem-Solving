#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        set<int> s;
        bool hasDuplicate = false;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            if (s.count(x))
                hasDuplicate = true;
            s.insert(x);
        }

        if (hasDuplicate)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
