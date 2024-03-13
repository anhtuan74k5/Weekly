#include <bits/stdc++.h>
using namespace std;

bool oppo (int x) {
    string s = to_string(x);
    int middle = s.length() / 2;
    for (int i = 0; i <= middle; i ++)
        if (s[i] != s[s.length() - 1 - i])
            return false;
        return true;
} 

int main () {
    int t;
    int a,b;
    cin >> t;
    while (t--) {
    int count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i ++)
        if (oppo(i))
            count ++ ;
    cout << count << endl;
                }
}   