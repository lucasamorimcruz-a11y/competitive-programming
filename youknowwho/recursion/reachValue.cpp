#include <bits/stdc++.h>
using namespace std;

set<int> visitado;

bool f(int n, int a)
{
    if (n == a)
        return true;
    if (a > n)
        return false;
    if (visitado.count(a))
        return false;
    visitado.insert(a);
    return f(n, a * 10) || f(n, a * 20);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        visitado.clear();
        if (f(n, 1))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}