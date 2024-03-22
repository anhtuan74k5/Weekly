#include <bits/stdc++.h>
using namespace std;

int main () {
	srand(time(NULL));
	int arr[30];
	for (int i = 0; i < 30; i ++)
		while (rand() % 101 != 0)
			arr[i] = rand() % 101;
	for (int i = 0; i < 30; i ++)
		cout << arr[i] <<" ";
	cout << endl;
	for (int i = 0; i < 29; i ++)
		{
			for (int j = 29; j > i; j --)
				if (arr[j] < arr[i])
					swap (arr[i],arr[j]);
		}
	for (int i = 0; i < 30; i ++)
		cout << arr[i] <<" ";
return 0;
}