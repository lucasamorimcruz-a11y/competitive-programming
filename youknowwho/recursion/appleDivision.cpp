#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> w_apples(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w_apples[i];
    }
    sort(w_apples.begin(), w_apples.end());
    vector<int> g1;
    vector<int> g2;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (left <= right)
        {
            g1.push_back(w_apples[left]);
            left++;
        }
        if (left <= right)
        {
            g2.push_back(w_apples[right]);
            right--;
        }
    }
    int total = abs(accumulate(g1.begin(), g1.end(), 0) - accumulate(g2.begin(), g2.end(), 0));
    cout << total;
}
