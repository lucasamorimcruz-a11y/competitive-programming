#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        bool ans = false;
        for (auto &x : a)
        {
            cin >> x;
            if (x == k) ans = true;
        }
        if (ans)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
