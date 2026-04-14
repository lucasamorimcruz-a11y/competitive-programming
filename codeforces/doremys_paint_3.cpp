#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        for (auto &x : a) cin >> x;
        map<int,int>fmp;
        for (int i = 0; i < n; i++){
            fmp[a[i]]++;
        }   
        if (n == 2) cout << "Yes" << '\n';
        else if (fmp.size() == 1) {
            cout << "Yes" << '\n';
        }
        else if (fmp.size() == 2){
            auto i = fmp.begin();
            auto p = i->second; i++;
            auto p2 = i->second;
            if (abs (p2-p) <= 1){
                cout << "Yes" << '\n';
            }
            else{
                cout << "No" << '\n';
            }
        }
        else {  
            cout << "No" << '\n';
        }
    }
    return 0;
    }
