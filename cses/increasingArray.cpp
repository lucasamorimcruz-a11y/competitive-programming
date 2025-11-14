#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> array(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    long long amountmoves{0};
    long long x;
    for (long long i = 1; i < n; i++)
    {
        x = array[i];
        if (array[i - 1] > x)
        {
            long long sum = abs(x - array[i - 1]);
            array[i] += sum;
            amountmoves += sum;
        }
    }
    cout << amountmoves;
}