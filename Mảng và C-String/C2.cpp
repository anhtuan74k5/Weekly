#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int middle = s.length()/2;
    for (int i = 0; i <= middle; i ++)
        if (s[i] != s[s.length() -1 - i])
            {
                cout << "No";
                return 0;
            }
    cout << "Yes";
    return 0;
}