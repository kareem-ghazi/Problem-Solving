#include <bits/stdc++.h>

using namespace std;

string f(int a, string s1, string s2)
{
    return a ? (s1 + s2) : (s2 + s1);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string result = f(1,f(1,f(0,s1,s2)+s1,s2),s1+f(0,s1+s2,f(1,s2,s1)));
    cout << result << endl;

    return 0;
}