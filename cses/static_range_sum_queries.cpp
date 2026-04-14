#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n, q; cin >> n >> q;
    vector<int> a (n);
    for (auto &x : a ) cin >> x;
    vector<int> psum (n + 1);
    psum[0] = 0;
    for (int i  = 1; i <= n; i++){
        psum[i] = a[i-1] + psum[i-1];
    }
    while (q--){
        int a,b; cin >> a >> b;
        cout << psum[b] - psum[a - 1] << '\n';
    }
    return 0;
}