#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        int curr = 1 ;
        int maxi = 0;
        sort (a.begin(), a.end());
        for (int i = 0; i < n - 1; i++){
            if (abs(a[i]  - a[i+1]) <= k){
                curr++;
            }
            else{
                maxi = max(maxi, curr);
                curr = 1;
            }
        }
        maxi = max(maxi,curr);
        cout << n - maxi << '\n';
        
        
    }    
    return 0;
}
