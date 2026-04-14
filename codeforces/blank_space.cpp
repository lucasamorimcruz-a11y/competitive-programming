#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int longest = 0;
        int curr = 0;
        for (int i = 0; i < n; i++){
            if (a[i] ==0 ){
                curr++;
                longest = max (longest, curr);
            }
            else{
                curr = 0;
            }
        }
        cout << longest << '\n';
    }
    return 0;
}
