#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    stack <int> st;
    int sum = 0;
    while (t--){
        int input; cin >> input;
        if (input == 0) {
            int i = st.top();
            sum -= i;
            st.pop();
        }
        else{
            sum += input;
            st.push(input);
        }
    }
    cout << sum << '\n';

}