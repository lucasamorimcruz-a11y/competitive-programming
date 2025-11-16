#include <bits/stdc++.h>
using namespace std;
const long long MOD =  static_cast<long long>(1e9) + 7;

int main(){
    long long n;
    cin >> n;
    long long result = 1;
    
    for(int i =0; i < n; ++i){
    result = (result * 2) % MOD;
    }
    cout << result;
}