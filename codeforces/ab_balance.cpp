#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string ab = "ab";
        string ba = "ba";
        int ab_counter=  0;
        int ba_counter = 0;
        for (int i = 0; i < s.size() - 1; i++){
            if (ab == s.substr(i, 2)){
                ab_counter++;
            }
            else if (ba == s.substr(i,2)){
                ba_counter++;
            }
        }
        if (ba_counter > ab_counter)[
            
        ]
    }
    return 0;
}
