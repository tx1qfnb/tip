#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> field(n, vector<int>(m, 0));

    int w;
    cin >> w;

    for (int i = 0; i < w; i++) {
        int row, column;
        cin >> row >> column;

        row--;
        column--;

        field[row][column] = -1;

        for (int i = row - 1; i <= row + 1; i++) {
            for (int j = column - 1; j <= column + 1; j++) {
                if (i >= 0 && i < n && j >= 0 && j < m) {
                    if (field[i][j] != -1) {
                        field[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1) {
                cout << "*";
            }
            else {
                cout << field[i][j];
            }

            if (j < m - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}