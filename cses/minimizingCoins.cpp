#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
vector<long long> dp (maxn, 0);

long long solve(int n)
{
    if (n <= 1){
        return dp[n];
    }
    for (int i = 0; i < n; i++){
        dp[i] = 0;
    } 
}

int main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
}