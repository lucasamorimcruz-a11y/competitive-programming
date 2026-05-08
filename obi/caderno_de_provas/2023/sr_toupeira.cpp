#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int s, t; cin >> s >> t;
    set<pair<int,int>> a;
    while (t--){
        int x, y; cin >> x >> y;
        a.insert({x,y});
        a.insert ({y,x});
    }    
    int p; cin >> p;
    int counter = 0;
    while (p--){
        bool ok = true;
        int n; cin >> n;
        vector<int> seq (n);
        for (auto &x : seq) cin >> x;
        for (int i = 0; i < seq.size() - 1; i++){
            if ( !(a.count({seq[i], seq[i+1]}))) {
                ok = false;
            }
        }          
        if (ok) counter++;
    }  
    cout << counter << '\n';
    return 0;

}
