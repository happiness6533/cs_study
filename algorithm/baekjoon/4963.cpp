#include <iostream>
#include <vector>
using namespace std;

int** map;
int** check;
int moveRow[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int moveCol[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void dfs(int row, int col, int** map, int numOfTown, int h, int w) {
	for (int i = 0; i < 9; i++) {
		if (row + moveRow[i] > h - 1 || col + moveCol[i] > w - 1 || row + moveRow[i] < 0 || col + moveCol[i] < 0) {
			continue;
		}
		if (check[row + moveRow[i]][col + moveCol[i]] == 0) {
			if (map[row + moveRow[i]][col + moveCol[i]] == 1) {
				check[row + moveRow[i]][col + moveCol[i]] = numOfTown;
				dfs(row + moveRow[i], col + moveCol[i], map, numOfTown, h, w);
			}
		}
	}
	return;
}



int main() {
	while (true) {
		int w, h;
		cin >> w >> h;
		if (w == 0 && h == 0) {
			return 0;
		}

		map = new int* [h];
		check = new int* [h];
		for (int i = 0; i < h; i++) {
			map[i] = new int[w];
			check[i] = new int[w];
			for (int j = 0; j < w; j++) {
				int val;
				cin >> val;
				map[i][j] = val;
				check[i][j] = 0;
			}
		}

		int numOfTown = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] != 0 && check[i][j] == 0) {
					numOfTown++;
					dfs(i, j, map, numOfTown, h, w);
				}
			}
		}

		cout << numOfTown;
	}
}