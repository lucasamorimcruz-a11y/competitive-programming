#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int matrix[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int total_sum = 0;
        for (int i = 0; i < 10; i++)
        {

            for (int j = 0; j < 10; j++)
            {
                char c;
                cin >> c;
                if (c == 'X')
                {
                    total_sum += matrix[i][j];
                }
            }
        }
        ans.push_back (total_sum);
    }
    for (auto x : ans){
        cout << x << '\n';
    }

    return 0;
}
