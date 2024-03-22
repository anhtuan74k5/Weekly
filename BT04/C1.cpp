#include <bits/stdc++.h>
using namespace std;
int n;
int main () {
    cin >> n;
    int ar[n+1];
    bool check[n+1];
    for (int i = 1; i <= n; i ++)
    check[i] = false;
    for (int i = 1; i <= n; i ++)
        {
        int x;
        cin >> x;
        if (check[x] == true)
            {
                cout << "Yes";
                return 0;
            }
        check[x] = true;
        }
        cout <<"No";
        return 0;
}