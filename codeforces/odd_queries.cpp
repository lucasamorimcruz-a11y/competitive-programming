#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n, q; cin >> n >> q;
        vector<int> a (n);
        for (auto &x  : a) cin >> x;
        vector<int> psum (n+1);
        psum[0] = 0;
        for (int i = 1; i <= n; i++){
            psum[i] = psum[i-1] + a[i - 1];
        }
        while (q--){
            int l,r,k; cin >> l >> r >> k;
            int sum = k * (r - l + 1);
            int ans = psum[n] - (abs(psum[r] - psum[l - 1])) + sum;
            if (ans % 2 == 1) cout << "YES" << '\n';
            else{
                cout << "NO" << '\n';
            }
        }
    }    
    return 0;
}
