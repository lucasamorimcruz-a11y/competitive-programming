#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n - 1);
        int sum = 0;
        for (auto &x : a){
        cin >> x;
            sum+=x;
        }
        cout << (sum * -1) << '\n';
    }    
    return 0;
}
