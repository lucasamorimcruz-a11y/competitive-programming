#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        int s = 0;
        for (auto &x : a){
            cin >> x;
            s ^= x;
        };
        if (n % 2 == 1){
            cout << s << '\n';
        }
        else {
            if (s == 0) cout << 0 << '\n';
            else {
                cout << -1 << '\n';
            }
        }       
}
}