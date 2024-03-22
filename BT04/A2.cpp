#include <bits/stdc++.h>
using namespace std;
char a1[4];
// char b1[n];
char c1[] = "abcd";
int main () {
char a2[4];
    for (int i = 0; i < 4; i ++)
        {
            cout << a1[i] <<" " << a2[i] << endl;
        }
    int n;
    cin >> n;
    char b2[n] = "abcd";
    for (int i = 0; i < n; i ++)
        {
            cout << b2[i] << " ";
        }
    cout << endl;
    char c2[] = "abcd";
    cout << sizeof(c1) <<" " << sizeof(c2) << endl;
    for (int i = 0; i < 5; i ++)
        cout << c1[i] <<" " << c2[i] << endl;
}