#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){ 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        deque<char> dq;
        for (char c : s) {
            dq.push_back(c);
        }   
        bool ok = true;
        while (ok){
            if (dq.empty() || (dq.front() == dq.back())){
                cout << dq.size() << '\n';
                ok = false;
            }
            else{
                dq.pop_back();
                dq.pop_front();
            }
        }
    }
    
    return 0;
}
