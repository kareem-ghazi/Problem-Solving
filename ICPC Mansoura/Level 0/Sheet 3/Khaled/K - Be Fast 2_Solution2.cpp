#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 
 
    long long l, r, n; 
    cin >> l >> r >> n; 
 
    long long total = r - l + 1; // include both l and r
    long long countOfN = r / n - (l - 1) / n; // count of numbers divisible by n
    long long result = total - countOfN; // not divisible

    cout << result << '\n'; 
}
