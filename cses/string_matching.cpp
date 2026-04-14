#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    string s, pttrn;
    cin >> s >> pttrn;
    int pos = s.find(pttrn);
    int count = 0;
    while (pos != s.npos){
        ++count;
        pos = s.find(pttrn, pos + 1);
    }
    cout << count << '\n';
    return 0;
}
