#include <bits/stdc++.h>

using namespace std;

void CreateMines(vector<vector<bool>>& mines, int rows, int cols, int numMines) {
    int count = 0;
    while (count < numMines) {
        int r = rand() % rows;
        int c = rand() % cols;
        if (!mines[r][c]) {
            mines[r][c] = true;
            count++;
        }
    }
}

void printBoard(const vector<vector<bool>>& mines) {
    for (int i = 0; i < mines.size(); i++) {
        for (int j = 0; j < mines[0].size(); j++) {
            cout << (mines[i][j] ? "*" : ".") << " ";
        }
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "domin <rows> <cols> <mines>" << endl;
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int numMines = atoi(argv[3]);

    if (rows <= 0 || cols <= 0 || numMines < 0 || numMines > rows * cols) {
        cout << "Invalid number of rows, columns, or mines." << endl;
        return 1;
    }

    vector<vector<bool>> mines(rows, vector<bool>(cols, false));

    srand(time(NULL));  
    CreateMines(mines, rows, cols, numMines);

    printBoard(mines);

    return 0;
}
