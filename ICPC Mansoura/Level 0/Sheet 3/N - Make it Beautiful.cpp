#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> arr (n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        bool flag = false;
        reverse(arr.begin(), arr.end());

        if (arr[0] == arr[1] && arr[1] != arr[n - 1])
        {
            swap(arr[1], arr[n - 1]);
        }
        else if (arr[0] == arr[1])
            flag = true;

        if (flag)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; ++i) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
}
