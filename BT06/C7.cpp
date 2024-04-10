#include <bits/stdc++.h>
using namespace std;

void Print (int n) {
    for (int destY = n; destY >= 0; destY --)
        {
            for (int destX = 0 - n; destX <= n; destX ++)
                {
                    if (abs(destX) + abs(destY) <= n)
                        cout << "*";
                    else cout << " ";
                }
            cout << endl;
        }
}
int main () {
    int n;
    cin >> n;
    int dps = n - 1;
    Print(dps);
}