#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long long> divisors;
        for (int i = 2; i * i <= n; i++)
        {
            if ((n % i) == 0)
            {
                divisors.insert(i);
                divisors.insert(n / i);
            }
        }

        int a{divisors[0]};
        int b{divisors[1]};
        int c{divisors[2]};
        bool possivel{true};

        if (possivel)
        {
            cout << "YES" << '\n'
                 << a << " " << b << " " << c << '\n';
        }
        else
        {
            cout << "NO";
        }
    }
}