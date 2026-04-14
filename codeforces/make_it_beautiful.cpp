#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){

    int t; cin >>t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        bool beautifuil = true;
        int sum = 0;
        for (auto &x : a) {
            cin >> x;
            if (sum == x){
                beautifuil = false;
            }
            sum+=x;
        }
        if (a[0] == a[n-1]){
            cout << "NO" << '\n';
        }
        else if (beautifuil){
            cout << "YES" << '\n';
            for (auto x : a) cout << x << " ";
            cout << '\n';
        }
        else{
            swap(a[0], a[n-1]);
            cout << "YES" << '\n';
            for (auto x : a) cout << x << " ";
            cout << '\n';
        }
        }

    return 0;
}
