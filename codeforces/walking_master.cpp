#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d){
            cout << -1 << '\n';
        }
        else if (a + (d - b) < c){
            cout << -1 << '\n';
        }
        else {
            cout << (d-b)+(a+(d-b)-c) << '\n';
        }
    }    
    return 0;
}
