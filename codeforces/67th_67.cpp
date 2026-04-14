#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n = 7;
        vector<int> a (n);
        int abs_best = 0;
        for (auto &x  : a){
            cin >> x;
            abs_best = max (abs(x), abs_best);
        } 
        bool once = true;
        int res = 1;
        sort(a.begin(),a.end());
        for (int i = n - 1; i >= 0; i--){
            if (abs(a[i]) == abs_best && once){
                res += abs(a[i]);
                once = false;
            }
            else {
                res += (-1 * a[i]);
            }
            
        }
        cout << res - 1 << '\n';
    }    
    return 0;
}
