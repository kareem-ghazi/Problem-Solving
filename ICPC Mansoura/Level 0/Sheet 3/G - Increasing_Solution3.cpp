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
            cin>> arr[i];
        }

        sort(arr, arr+n);
        bool hasDuplicate = false;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] == arr[i + 1])
            {
                hasDuplicate = true;
                break;
            }
        }

        if (hasDuplicate)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
