#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sequence;
    getline(cin, sequence);
    long long currentSeq = 1;
    long long untilNow = 1;
    for (int i = 1; i < sequence.length(); i++)
    {
        if (sequence[i] == sequence[i - 1])
        {
            currentSeq++;
            if (currentSeq > untilNow)
            {
                untilNow = currentSeq;
            }
        }
        else
        {
            currentSeq = 1;
        }
    }
    cout << untilNow;
}