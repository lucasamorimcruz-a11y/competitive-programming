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
        string a;
        cin >> a;
        int ans = 0;
        bool b = false;
        for (int i = 0; i + 2 < n; i++)
        {
            if (a[i] == '.' && a[i + 1] == '.' && a[i + 2] == '.')
            {
                b = true;
                break;
            }
        }

        if (b)
        {
            cout << 2 << '\n';
        }
        else
        {
            int cnt = count(a.begin(), a.end(), '.');
            cout << cnt << '\n';
        }
}
    return 0;

}