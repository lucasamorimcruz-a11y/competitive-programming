#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    vector<int> vals;
    for (int k = 0; k <= 6; k++) {
        int p = pow(10, k);
        for (int d = 1; d <= 9; d++) {
            vals.push_back(d * p);
        }
    }
    sort(vals.begin(), vals.end());
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 0;
        for (int x : vals) {
            if (x <= n) ans++;
        }
        cout << ans << '\n';
 

    }
    return 0;
}
