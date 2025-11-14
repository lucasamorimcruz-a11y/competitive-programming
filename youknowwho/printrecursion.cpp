#include <bits/stdc++.h>
using namespace std;

string fact(int n){
    if(n == 1){
        cout << "I love Recursion";
        return "\n";
    }
    else{
        cout << "I love Recursion" << '\n';
        return fact(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << fact(n);

}