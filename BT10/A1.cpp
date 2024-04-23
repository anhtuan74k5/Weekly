#include <bits/stdc++.h>
#include <cstring>
using namespace std;

char* concat(const char* a, const char* b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    int lentotal = len1 + len2;
    char* result = new char[lentotal + 1];

    strcpy(result, a);
    strcat(result, b);

    return result;
}

int main ()
{
    const char* a = "Hello";
    const char* b = "World";
    char* mergestring = concat(a,b);
    cout << mergestring << endl;
    delete[] mergestring;
    return 0;
}