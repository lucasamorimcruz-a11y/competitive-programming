#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    vector<int> results;

    
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        vector<int> psum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            psum[i + 1] = psum[i] + a[i];
        }

        int total_sum = psum[n];
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long old_sum = psum[r] - psum[l - 1];
            long long new_sum = (r - l + 1) * k;
            long long total = total_sum - old_sum + new_sum;
            results.push_back(total);
        }
    }
    for (auto total : results)
    {
        if (total % 2 == 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}