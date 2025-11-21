#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h[i] = x;
    }
    vector<int> prefix_sum(n + 1, 0);
    for(int i = 0; i < n; i++){
        prefix_sum[i+1] = prefix_sum[i] + h[i]; 
    }
    if (n == 1)
    {
        cout << 1 << '\n';
        return 0;
    }
    int min_sum = 1e9;
    int min_index = -1;
    for(int i = 0; i <= n -k; i++)
    {
        if (min_sum > (prefix_sum[i+k] - prefix_sum[i])){
            min_sum = prefix_sum[i + k] - prefix_sum[i];
            min_index = i;
        }
    }
    cout << min_index + 1 << '\n';
}
