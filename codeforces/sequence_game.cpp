#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        vector<int> b;

        bool is = true;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 1; i < n; i++){
            if (!(a[i] >= a[i-1])){
                is = false;
            }
        }
        if (is){
            for (auto x : a) b.push_back(x);
        }
        else{
            b.push_back(a[0]);
            for (int i = 1; i < n; i++){
                if(a[i-1] <= a[i]){
                    b.push_back(a[i]);
                }
                else{
                    b.push_back(a[i]);
                    b.push_back(a[i]);

                }
            }

        }
        cout << b.size() << '\n';
        for (auto &x : b){
            cout << x << " ";
        }
        cout << '\n';
    }    
    return 0;
}
