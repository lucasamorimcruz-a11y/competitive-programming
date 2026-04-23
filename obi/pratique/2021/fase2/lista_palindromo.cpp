#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int n; cin >> n;
    vector<int> a (n); 
    for (auto &x : a) cin >> x;
    bool ok = false;
    int ops = 0;
    int r = a.size() - 1;
    int l = 0;
    while (l < r){
        if (a[l] == a[r]){
            l++;
            r--;
        }
        else if (a[r] > a[l]){
            a[l+1] += a[l];
            l++;
            ops++;
        }
        else {
            a[r-1] += a[r];
            r--;
            ops++;            
        }
    }
    cout << ops << '\n';
    return 0;
}
