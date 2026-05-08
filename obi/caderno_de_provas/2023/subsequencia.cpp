#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int a, b; cin >> a >> b;
    vector<int> sa (a), sb (b);
    for (auto &x : sa) cin >> x; for (auto &x : sb) cin >> x;
    int i = 0, j =0;
    while (i < a && j < b){
        if (sb[j] == sa[i]){
            j++;
        }
        i++;
    }
    if (j == b) cout << "S" << '\n';
    else{
        cout << "N" << '\n';
    }
    return 0;
}
