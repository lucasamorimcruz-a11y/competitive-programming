#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n; cin >> n;
    vector<int> a (n);
    for (auto &x : a ) cin >> x;
    int q; cin >> q;
    sort(a.begin(),a.end());
    while (q--){
        int m; cin >> m;
        int index = upper_bound(a.begin(), a.end(), m) - a.begin();
        cout << index << '\n';
    }    
    return 0;
}
