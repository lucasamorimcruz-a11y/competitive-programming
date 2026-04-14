#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n-1; j++){
                if (a[j-1] < a[j] && a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                }
            }
        }
        if (is_sorted(a.begin(), a.end())){
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}
