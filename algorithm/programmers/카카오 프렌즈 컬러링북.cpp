#include <vector>
#include <iostream>
using namespace std;

int dfs(int row, int col, vector<vector<int>> picture, vector<vector<int>>& check, int cntOfArea, int m, int n, vector<int> moveRow, vector<int> moveCol) {
	for (int i = 0; i < 4; i++) {
		if (row + moveRow[i] > m - 1 || col + moveCol[i] > n - 1 || row + moveRow[i] < 0 || col + moveCol[i] < 0) {
			continue;
		}
		if (check[row + moveRow[i]][col + moveCol[i]] == 0) {
			if (picture[row + moveRow[i]][col + moveCol[i]] == picture[row][col]) {
				check[row + moveRow[i]][col + moveCol[i]] = cntOfArea;
				dfs(row + moveRow[i], col + moveCol[i], picture, check, cntOfArea, m, n, moveRow, moveCol);
			}
		}
	}

	int area = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j] == cntOfArea) {
				area++;
			}
		}
	}

	return area;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
	vector<int> moveRow = { 0, 1, -1, 0 };
	vector<int> moveCol = { 1, 0, 0, -1 };
	vector<vector<int>> check;
	for (int i = 0; i < m; i++) {
		vector<int> col;
		check.push_back(col);
		for (int j = 0; j < n; j++) {
			check[i].push_back(0);
		}
	}

	int cntOfArea = 0;
	int maxArea = 0;
	vector<int> answer;
	answer.push_back(cntOfArea);
	answer.push_back(maxArea);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j] == 0) {
				answer[0] = answer[0] + 1;
				answer[1] = 1;
				check[i][j] = cntOfArea;
				int area = dfs(i, j, picture, check, cntOfArea, m, n, moveRow, moveCol);
				if (area > answer[1]) {
					answer[1] = area;
				}
				cout << answer[0] << ' ' << answer[1] << endl;
			}
		}
	}

	return answer;
}

int main() {
	vector<vector<int>> picture = { {1, 1, 1, 0},{1, 2, 2, 0},{1, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 3},{0, 0, 0, 3} };
	vector<int> answer = solution(6, 4, picture);
	cout << answer[0] << ' ' << answer[1] << endl;
	return 0;
}