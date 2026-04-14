#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n; 
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        vector<int> b, c;
        sort(a.begin(), a.end());
        int min = a[0];
        b.push_back(min);
        for (int i = 1; i < n; i++){
            if (a[i] == min){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if (!c.empty()){
            cout << b.size() << " " << c.size();
            cout << '\n';
            for (auto x : b) cout << x << " ";
            cout << '\n';
            for (auto x : c) cout << x << " ";
            cout << '\n';
        }
        else{
            cout << -1 << '\n';
        }
        
    }    
    return 0;
}
