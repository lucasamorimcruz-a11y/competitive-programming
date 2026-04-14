#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int n = 6, w = 0, l = 0;
    while (n--)
    {
        char in;
        cin >> in;
        if (in == 'V')
        {
            w++;
        }
        else
        {
            l++;
        }
    }
    if (w >= 5)
    {
        cout << 1;
        return 0;
    }
    else if (w >= 3)
    {
        cout << 2;
        return 0;
    }
    else if (w >= 1)
    {
        cout << 3;
        return 0;
    }
    else
    {
        cout << -1;
        return 0;
    }
}
