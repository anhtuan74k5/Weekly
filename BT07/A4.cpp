#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int k) {
    int *left = arr;
    int *right = arr + n - 1;

    while (left <= right) {
        int *mid = left + (right - left) / 2;
        if (*mid == k) {
            return mid - arr; 
        } else if (*mid < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 3, 4, 10, 15, 18, 20, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10;

    int index = binarySearch(arr, n, k);
    if (index != -1) {
        cout << index << endl;
    } else {
        cout << "Khong tim duoc" << endl;
    }
    return 0;
}
