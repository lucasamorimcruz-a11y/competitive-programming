#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ops = 0;
        vector<int> a (n); 
        map<int,int> fmp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            fmp[a[i]]++;
        }               
        int biggest = 0;
        for (auto i : fmp) { biggest = max (biggest,i.second);}
        int cp = biggest;
        while (cp < n){
            ops++;
            int a = min (cp, n - cp);
            ops += a;
            cp += a;
        }
        cout << ops << '\n';
    }
    return 0;
}
