#include <bits/stdc++.h>
using namespace std;

int GetGCD(int& a, int& b)
{   if (b < a)
        swap (a,b);
    if (a % b == 0)
        return b;
    else
    {
        while (b != 0)
        {
            int tg = a % b;
            a = b;
            b = tg;
        }
        return a;
    }
}

int main () {
    int a,b;
    cin >> a >> b;
    cout << GetGCD(a,b);
}