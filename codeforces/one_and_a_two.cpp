#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a (n);
        int two_counter = 0;
        for (int i =0 ; i < n; i++){
            int x; cin >> x;
            if (x == 2){
                two_counter++;
            }
            a[i] = x;
        }
        if ((two_counter % 2 == 1) && a.size() != 1){
            cout << "-1" <<'\n';
        }
        else{
            if (two_counter == 0){
                cout << 1 << '\n';
                continue;
            }
            int tt = 0;
            int i = 0;
            while (tt != (two_counter / 2)){
                if (a[i] == 2) tt++;
                i++;
            }
            cout << i << '\n';   
        }
        
    }    
    return 0;
}
