#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        int ans = a[0];
        for (int i = 1; i < n; i++){
            ans = ans & a[i];
        }        
        cout << ans << '\n';

    }
    return 0;
}
