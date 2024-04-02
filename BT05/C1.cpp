#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void SetZero(char arr[][100], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = '*';
}

void Print(char arr[][100], int m, int n, int x, int y, int count) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == x && j == y)
                {arr[i][j] = char(48 + count);
                cout << arr[i][j]<<" ";}
            else
                cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}
void SetMines(char arr[][100], int m, int n, bool check[][100], int k) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            check[i][j] = true;
    while (k != 0) {
        int h = rand() % m, j = rand() % n;
        if (check[h][j] == true) {
            k--;
            check[h][j] = false;
        }
    }
}
bool flag = true;
void LogicMines(char arr[][100], bool check[][100], int m, int n, int x, int y) {
    int count = 0;
    if (check[x][y] == true) {
        for (int i = x - 1; i <= x + 1; i++) {
            for (int j = y - 1; j <= y + 1; j++) {
                if (i >= 0 && i < m && j >= 0 && j < n && check[i][j] == false)
                    count++;
            }
        }

        Print(arr, m, n, x, y, count);
    } else {
        cout << "YOU'RE DEAD" << endl;
        flag = false;
    }
}

int main() {
    srand(time(NULL));

    int m, n, k;
    cout << "Enter the number of Rows and Columns: ";
    cin >> m >> n;
    cout << "Enter the number of mines: ";
    cin >> k;
    int remain = m*n - k;
    char arr[100][100];
    bool check[100][100];
    SetZero(arr, m, n);
    SetMines(arr, m, n, check, k);

    int x, y;
    while (remain --)
    {
    cout << "Enter coordinates: ";
    cin >> x >> y;
    LogicMines(arr, check, m, n, x, y);
    if (flag == false)
        return 0;
    }

}
