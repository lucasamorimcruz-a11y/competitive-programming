#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x  :a ) cin >> x;
    int bs = a[0];
    int cs = 0;
    for (auto x : a){
        cs = max(x, cs + x);
        bs = max(bs, cs);
    }
    cout << bs << '\n';
    return 0;
}
