#include <bits/stdc++.h>
using namespace std;

/*
Your task is to count the number of ways to construct sum n by throwing a dice one or more times.
 Each throw produces an outcome between 1 and  6.*/

const long long maxn = 1000001;
const int MOD = 1e9 + 7;
vector<long long> dp(maxn,0);

long long solve(int n)
{
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int d = 1; d <= 6; d++)
        {
            if (i - d >= 0)
            {
                dp[i] = (dp[i] + dp[i - d]) % MOD;;
            }
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    cout << solve(n) << '\n';
}