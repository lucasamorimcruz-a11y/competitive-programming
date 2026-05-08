#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(3);
    for (auto &x : a)
        cin >> x;
    sort (a.begin(), a.end());
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum > n){
            break;
        }
        counter++;
    }
    cout << counter << '\n';
    return 0;
}
