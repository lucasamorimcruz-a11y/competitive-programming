#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s[0] == s[s.size() - 1]) cout << s << '\n';
        else{
            s[n-1] = s[0];
            cout << s << '\n';
        }
    }
    return 0;
}
