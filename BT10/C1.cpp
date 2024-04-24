#include <bits/stdc++.h>
using namespace std;

class String {
private:
    int n;
    char* str;

public:
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        n = other.n;
        str = new char[n + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    void print() const {
        cout << str << endl;
    }

    String append(const char* s) const {
        int len = strlen(s);
        char* newStr = new char[n + len + 1];
        strcpy(newStr, str);
        strcat(newStr, s);

        String newString(newStr);
        delete[] newStr;
        return newString;
    }
};

int main() {
    String greeting("Hi");
    String newGreeting = greeting.append(" there");
    newGreeting.print();  
    return 0;
}
