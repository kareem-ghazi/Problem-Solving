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
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }

        set<int> s(arr,arr+n);
        if (s.size() == n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
