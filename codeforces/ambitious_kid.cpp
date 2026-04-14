#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n; cin >> n;
    vector<int> a (n);
    int min_m = 999999999;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x < 0) {
            x = (x * -1);
        }
        min_m = min (min_m, x);
    }
    cout << min_m << '\n';
    return 0;
}
