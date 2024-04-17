#include <bits/stdc++.h>
using namespace std;
int count(const char* x,const char* y)
{
    int k = 0;
    for(int i = 0; i <= strlen(y) - strlen(x); i ++)
    {
        if (strncmp(x, y + i, strlen(x)) == 0) {
            k++;
        }
    }
    return k;
}
int main()
{
    string x, y;
    cin >> x >> y;
    cout << count(x.c_str(), y.c_str()) << endl;
    return 0;
}