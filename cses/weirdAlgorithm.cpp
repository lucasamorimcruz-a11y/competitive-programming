#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    vector<long long>allresults;
    while (n != 1){
        allresults.push_back(n);
        if(n % 2 == 0){
            n = n /2;
        }
        else{
            n = (n*3) + 1;
        }
    }
    allresults.push_back(1);
    for(auto x : allresults){
        cout << x << " ";
    }
}