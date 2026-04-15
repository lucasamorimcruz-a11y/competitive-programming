#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int min_s = k * (k + 1) / 2;
        int max_s = k * (2 * n - k + 1) / 2;
        if (x >= min_s && x <= max_s)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}