#include <bits/stdc++.h>

using namespace std;

int func1(int x)
{
    return 2 * x + 3;
}

int main()
{
    int x;
    cin >> x;

    int result = func1(func1(func1(x))) + 2 * func1(x * func1(x));

    cout << result << endl;

    return 0;
}