#include <iostream>
#include <vector>
using namespace std;

int** map;
int** check;
int moveRow[3] = { 0, 0, 1 };
int moveCol[3] = { 0, 1, 0 };

int dfs(int row, int col, int** map, int numOfTown, int cnt, int n) {
	for (int i = 0; i < 3; i++) {
		if (row + moveRow[i] > n - 1 || col + moveCol[i] > n - 1 || row + moveRow[i] < 0 || col + moveCol[i] < 0) {
			continue;
		}
		if (check[row + moveRow[i]][col + moveCol[i]] == 0) {
			if (map[row + moveRow[i]][col + moveCol[i]] == 1) {
				check[row + moveRow[i]][col + moveCol[i]] = numOfTown;
				dfs(row + moveRow[i], col + moveCol[i], map, cnt++, numOfTown, n);
			}
		}
	}
	return cnt;
}



int main() {
	int n;
	cin >> n;

	map = new int* [n];
	check = new int* [n];
	for (int i = 0; i < n; i++) {
		map[i] = new int[n];
		check[i] = new int[n];
		for (int j = 0; j < n; j++) {
			char val;
			cin >> val;
			map[i][j] = val - '0';
			check[i][j] = 0;
		}
	}

	int numOfTown = 0;
	int cntArray[99];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] != 0 && check[i][j] == 0) {
				numOfTown++;
				int cnt = 1;
				cntArray[numOfTown - 1] = dfs(i, j, map, numOfTown, cnt, n);
			}
		}
	}

	cout << numOfTown;
	for (int i = 0; i < numOfTown; i++) {
		cout << cntArray[i] << endl;
	}
}