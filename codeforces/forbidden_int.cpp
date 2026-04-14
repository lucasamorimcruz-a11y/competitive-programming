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
        bool ok;
        vector<int> ans;
        if (x != 1 && k >= 1)
        {
            ok = true;
            for (int i = 0; i < n; i++)
            {
                ans.push_back(1);
            }
        }
        else if (k == 1)
        {
            ok = false;
        }
        else if (k == 2)
        {
            if (n % 2 == 0)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    ok = true;
                    ans.push_back(2);
                }
            }
            else
            {
                ok = false;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                ans.push_back(2);
            }
            else
            {
                ans.push_back(3);
            }
            for (int i = 0; i < (n / 2) - 1; i++)
            {
                ans.push_back(2);
            }
            ok = true;
        }
        if (ok)
        {
            cout << "YES" << '\n';
            cout << ans.size() << '\n';
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
