#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<string, bool> seen;

    int c = 0, e = 0, u = 0, p = 0;
    bool ec = false, ee = false, eu = false, ep = false;

    for (int i = 0; i + 2 < s.size(); i += 3)
    {
        string carta = s.substr(i, 3);

        if (seen[carta])
        {
            if (carta[2] == 'C') ec = true;
            if (carta[2] == 'E') ee = true;
            if (carta[2] == 'U') eu = true;
            if (carta[2] == 'P') ep = true;
        }
        else
        {
            seen[carta] = true;

            if (carta[2] == 'C') c++;
            if (carta[2] == 'E') e++;
            if (carta[2] == 'U') u++;
            if (carta[2] == 'P') p++;
        }
    }

    if (ec) cout << "erro\n";
    else cout << 13 - c << "\n";

    if (ee) cout << "erro\n";
    else cout << 13 - e << "\n";

    if (eu) cout << "erro\n";
    else cout << 13 - u << "\n";

    if (ep) cout << "erro\n";
    else cout << 13 - p << "\n";

    return 0;
}