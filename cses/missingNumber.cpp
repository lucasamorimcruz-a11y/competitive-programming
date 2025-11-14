#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sumFalt {0};
    int x;
    for(int i = 0; i < n-1; i++){
        cin >> x;
        sumFalt += x;
    }
    int sumReal {0};
    for(int i =0 ; i <= n; i++){
        sumReal += i;
    }
    
    cout << (sumReal - sumFalt);
}