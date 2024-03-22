#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (int size, char Str[]) {
	for (int i = 0; i <= (size-1)/2; i ++)
		{
			if (Str[i] != Str[size-1-i])
				return false;
		}
	return true;
}

int main () {
	char Str[100];
	cin >> Str;
	int size;
	size = strlen(Str);
	if (checkPalindrome(size,Str))
			cout << "Yes";
	else cout << "No";

}