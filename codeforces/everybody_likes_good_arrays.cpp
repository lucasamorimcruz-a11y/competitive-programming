#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> stack;
        int op = 0;
        for (int i = 0; i <n; i++){
            int x; cin >> x;
            stack.push_back( x % 2);
            while (stack.size() >=2 ){
                if (stack[stack.size() - 2] == stack[stack.size()-1]){
                    int parity = stack[stack.size() - 1];
                    stack.pop_back();
                    stack.pop_back();
                    stack.push_back(parity);
                    op++;
                }
            else{
                break;
            }
            }
            
        }
        cout << op << '\n';
    }
    return 0;
}
