#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &b : a)
            cin >> b;
        int ans = a[0]; int prev = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            ans = max (ans, a[i] - prev);
            prev = a[i];
        }
        ans = max (ans, 2 * (x - prev));
        cout << ans << '\n';
    }
        return 0;

}
