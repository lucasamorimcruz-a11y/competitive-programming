#include <bits/stdc++.h>
using namespace std;

int f(int s, int e)
{
    if (s == 1 && e == 1)
    {
        return 1;
    }
    if (s >= e)
    {
        return s == e;
    }
    return f(s + 1, e) + f(s + 2, e) + f(s + 3, e);
}


int main()
{
    int s, e;
    cin >> s >> e;
    cout << f(s, e);
    return 0;
}