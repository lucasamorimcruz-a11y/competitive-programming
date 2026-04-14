#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        for(auto &x : a) cin >> x;
        if (!(is_sorted(a.begin(),a.end()))){
            cout << 0 << '\n';
        }
        else{
            
        }
    }    
    return 0;
}
