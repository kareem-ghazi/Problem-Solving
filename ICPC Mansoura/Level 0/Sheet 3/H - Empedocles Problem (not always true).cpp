#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    string arr[n][4];
    for(int i = 0; i < n; i++)
    {
        int countYes = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == "yes")
                countYes++;
        }
        if (countYes == 4)
        {
            cout << "you were right";
            return 0;
        }
    }
    cout << "Empedocles was right";
}
