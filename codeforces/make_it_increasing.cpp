#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int curr = 0;
        int ops = 0;
        bool no = false;

        for (auto &x : a)
            cin >> x;
        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1] && a[i] > 0)
            {
                ops++;
                a[i] /= 2;
            }
            if (a[i] >= a[i + 1])
            {
                no = true;
                break;
            }
        }
        if (no)
            cout << -1 << '\n';
        else
        {
            cout << ops << '\n';
        }
    }

    return 0;
}
