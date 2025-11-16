#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string S;
    // getline(cin, S);
    // sort(S.begin(), S.end());
    // vector<pair<char,int>>vistos;
    // for(char c : S){
    //     bool encontrado = false;
    //     for(auto &p : vistos){
    //         if(p.first == c){
    //             p.second++;
    //             encontrado = true;
    //             break;
    //         }
    //     }
    //     if(!encontrado){
    //         vistos.push_back({c, 1});
    //     }
    // }
    // for(int i = 0; i < vistos.size(); i++){
    //     cout << vistos[i].first << " : " << vistos[i].second << '\n';
    // }
    string S;
    getline(cin, S);
    sort(S.begin(), S.end());
    vector<pair<char, int>> vistos;
    int count{0};
    for (int i = 1; i <= S.length(); i++)
    {
        if (S[i - 1] == S[i])
        {
            count++;
        }
        else
        {
            vistos.push_back({S[i - 1], count});
            count = 1;
        }
    }
    for (auto p : vistos)
    {
        cout << p.first << ": " << p.second << endl;
    }
}