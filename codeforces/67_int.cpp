#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int x; cin >> x;
        if (x < 67){
            cout << x + 1 << '\n';
        } else {
            cout << 67 << '\n';
        }
    }
}