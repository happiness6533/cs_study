#include <iostream>
#include <vector>
using namespace std;

int** map;
int** checkList;
int moveX[3] = { 1, 0, 1 };
int moveY[3] = { 0, 1, 1 };

void dfs(int startX, int startY, int** map, int numOfTown, int n, int m) {
    for (int i = 0; i < 3; i++) {
        if ((startX == n - 1) && (startY == m - 1)) {
            return;
        }
        else if (startX == n - 1) {
            if (checkList[startX][startY + moveY[i]] == 0) {
                if (map[startX ][startY + moveY[i]] == 1) {
                    checkList[startX][startY + moveY[i]] = numOfTown;
                    dfs(startX, startY + moveY[i], map, numOfTown, n, m);
                }
            }
        }
        else if (startY == m - 1) {
            if (checkList[startX + moveX[i]][startY] == 0) {
                if (map[startX + moveX[i]][startY] == 1) {
                    checkList[startX + moveX[i]][startY] = numOfTown;
                    dfs(startX + moveX[i], startY, map, numOfTown, n, m);
                }
            }
        }
        else {
            if (checkList[startX + moveX[i]][startY + moveY[i]] == 0) {
                if (map[startX + moveX[i]][startY + moveY[i]] == 1) {
                    checkList[startX + moveX[i]][startY + moveY[i]] = numOfTown;
                    dfs(startX + moveX[i], startY + moveY[i], map, numOfTown, n, m);
                }
            }
        }
    }

    return;
}


int main() {
    int n, m;
    cin >> n >> m;

    checkList = new int* [n];
    for (int i = 0; i < n; i++) {
        checkList[i] = new int[m];
        for (int j = 0; j < m; j++) {
            checkList[i][j] = 0;
        }
    }

    map = new int* [n];
    for (int i = 0; i < n; i++) {
        map[i] = new int[m];
        for (int j = 0; j < m; j++) {
            int value;
            cin >> value;
            map[i][j] = value;
        }
    }

    int numOfTown = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 1 && checkList[i][j] == 0) {
                numOfTown++;
                dfs(i, j, map, numOfTown, n, m);
            }
        }
    }

    cout << numOfTown;

    return 0;
}