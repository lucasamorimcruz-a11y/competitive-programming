#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers[i] = x;
    }
    vector<int> results;
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix_sum[i + 1] = prefix_sum[i] + numbers[i];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << (prefix_sum[b] - prefix_sum[a - 1]) << '\n';
    }

    
}