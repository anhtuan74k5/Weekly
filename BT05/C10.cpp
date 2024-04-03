#include <bits/stdc++.h>
using namespace std;

void GetTriple (vector <int> arr, int n)
{
    for (int i = 0; i < n - 2; i ++)
        {
            for (int j = i+1; j < n-1; j ++)
                {
                    for (int k = j+2; k < n; k ++)
                        {
                            if ((arr[i] + arr[j] + arr[k]) % 25 == 0)
                                cout << arr[i] <<" " << arr[j] <<" " << arr[k] << endl;
                        }
                }
        }
}
int main () {
    srand(time(NULL));
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i ++)
            arr.push_back(rand() % 50);
    GetTriple(arr, n);


}