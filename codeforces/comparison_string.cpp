#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        set<int> numbers;
        int curr_number = 1;
        numbers.emplace(curr_number);
        for (auto c : s){
            if (c == '>'){
                curr_number--;
                numbers.emplace(curr_number);
            }
            else{
                curr_number++;
                numbers.emplace(curr_number);
            }
        }
        cout << numbers.size() << '\n';
    }    
    return 0;
}
