#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int x; cin >> x;
    map <int, int> fmp;
    for (int i = 0 ; i < x; i++){
        int n; cin >> n;
        fmp[n]++;
    }
    cout << fmp.size() << '\n';
    return 0;
}
