#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    string s;
    cin >> s;
    if (s.size() < 7){
        cout << "NO" << '\n';
        return 0;
    }
    for (int i= 0; i <= s.size() - 7; i++){
        if (s.substr(i, 7) == "1111111" || s.substr (i, 7) == "0000000"){
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
