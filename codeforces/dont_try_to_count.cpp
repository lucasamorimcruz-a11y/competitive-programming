#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n, a; cin >> n >> a;
        string s, ss; cin >> s >> ss;
        bool ans = false;
        int nm = 0;
        for (int i = 0; i < 6 ; i++){
            if (s.find(ss) != string::npos){
                ans = true;
                nm = i;
                break;
            }
            else{
                s += s;
            }
        }
        if (ans){
            cout << nm << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
    return 0;
    //constraint ajudou mt nessa
}
