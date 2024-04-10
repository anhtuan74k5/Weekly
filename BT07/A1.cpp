#include <bits/stdc++.h>
using namespace std;
int main()
{

    int* p = new int;
    int* p2 = p;
    *p = 10;
    cout << *p2 << endl;
    delete p;
    cout << *p2;

}