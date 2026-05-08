#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int m, n; cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }    
    int p; cin >> p;
    int counter = 0;
    while (p--){
        int i, j; cin >> i >> j;
        i--; j--;
        if (a[i][j] == 0) continue;
        else{
            a[i][j]--;
            counter++;
        }
    }    
    cout << counter << '\n';

    return 0;
}
