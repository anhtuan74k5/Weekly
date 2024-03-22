#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (int n) {
	int new_n = 0;
	int fake_n = n;
	while (fake_n > 0)
	{
		new_n = new_n*10 + (fake_n%10);
		fake_n /= 10;
	}
	return (n == new_n);
} 
int main (){
	int t;
	cin >> t;
	while (t--)
	{	int count = 0;
		int a,b;
		cin >> a >> b;
		for (int i = a; i <= b; i ++)
			{
				if (checkPalindrome(i))
					count ++;
			}
			cout << count << endl;
	}
}