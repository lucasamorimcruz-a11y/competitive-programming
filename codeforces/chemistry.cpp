#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.rbegin(), s.rend());
        string p = s;
        sort (s.begin(), s.end());
        if (p == s || (s.size() == 1 && k == 1) || k == s.size() - 1) {
            cout << "YES" << '\n';
            continue;
        }
        map <int, int> fmp;
        for (int i = 0; i < n; i++){
                fmp[s[i]]++;
        }
        int odd_counter = 0;
        for (auto &it : fmp){
            if (it.second % 2 == 1){
                odd_counter++;
            }
        }
        if (odd_counter > k+1){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
    return 0;

}
