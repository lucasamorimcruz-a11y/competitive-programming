#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a [n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        if (is_sorted(a, a + n) || k > 1){
            cout << "YES" << '\n';
        }   
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
