#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        int first = a[0];
        int sum =  0;
        for (int i = 1; i < n; i++){
            sum += a[i];
        }
        bool has_parity = false;
        if ((first % 2 == 0 && sum % 2 == 0) || (first % 2 != 0 && sum % 2 != 0)){
            has_parity = true;
        }
        if (has_parity){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }    
    return 0;
}
