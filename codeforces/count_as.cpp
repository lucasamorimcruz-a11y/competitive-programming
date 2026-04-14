#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    string s; cin >> s;
    int q; cin >> q;
    int count = 0;
    vector<int> psum (s.size() + 1);
    for (int i = 1; i <= s.size(); i++){
        psum[i] = psum[i-1] + (s[i-1] == 'a');
    }
    while (q--){
        int a, b; cin >> a >> b;
        cout << psum[b] - psum[a - 1] << '\n';
    }    
    return 0;
}
