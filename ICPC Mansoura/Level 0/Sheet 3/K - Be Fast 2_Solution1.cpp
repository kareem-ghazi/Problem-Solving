#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long l,r,n;
    cin>>l>>r>>n;

    long long divisible_From_One_To_R = r / n;
    long long divisible_From_One_To_L_Minus1 = (l - 1) / n;
    long long divisible_From_L_To_R = divisible_From_One_To_R - divisible_From_One_To_L_Minus1;

    long long total = r - l + 1;
    long long notDivisible_From_L_To_R = total - divisible_From_L_To_R;

    cout << notDivisible_From_L_To_R;
}
