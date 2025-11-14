#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    long double r = b * logl(a);
    long double l = d * logl(c);
    if (r > l)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
}