#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int xk, yk; cin >> xk >> yk;
        int xq, yq; cin >> xq >> yq;
        set<pair<int,int>> king; set<pair<int,int>>queen;
        auto tupla = vector<pair<int,int>> {{a,b}, {a,-b}, {-a, b}, {-a,-b}, {b, a}, {b, -a}, {-b, -a}, {-b, a}};
        for (auto [ox, oy] : tupla){
            king.insert({xk + ox, yk + oy});
            queen.insert({xq + ox, yq + oy});
        }
        int ans = 0;
        for (auto x : queen){
            if (king.count(x)) ans++;
        }
        cout << ans << '\n';
    }    
    return 0;
}
