#include <iostream>
#include <vector>
using namespace std;

vector<vector<vector<int>>> searchVectors;
vector<vector<int>> check;
int moveRow[4] = { -1, 0, 0, 1 };
int moveCol[4] = {0, -1, 1, 0};
int days;

void bfs(vector<vector<int>> initCoords, int indexOfInitCoord) {
	vector<int> initCoord = initCoords[indexOfInitCoord];
	vector<vector<int>> search = searchVectors[indexOfInitCoord];
	search.push_back(initCoord);
	check[initCoord[0]][initCoord[1]] = 1;


	int lastCheck = -1;
	while (!search.empty()) {
		vector<int> oldCoord = search[0];
		int newCheck = check[oldCoord[0]][oldCoord[1]];
		if ((lastCheck != -1) && (newCheck != lastCheck)) {
			if (indexOfInitCoord == initCoords.size() - 1) {
				days++;
				bfs(initCoords, 0);
			}
			bfs(initCoords, indexOfInitCoord++);
		}

		for (int i = 0; i < 4; i++) {
			if (check[oldCoord[0] + moveRow[i]][oldCoord[1] + moveCol[i]] == 0) {
				check[oldCoord[0] + moveRow[i]][oldCoord[1] + moveCol[i]] == check[oldCoord[0]][oldCoord[1]] + 1;
				lastCheck = check[oldCoord[0]][oldCoord[1]];
				vector<int> newCoord = { oldCoord[0] + moveRow[i], oldCoord[1] + moveCol[i] };
				search.push_back(newCoord);
			}
		}

		search.erase(search.begin());
	}
}

int main() {
	int col, row;
	cin >> col >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int val;
			cin >> val;
			check[i][j] = 0;
		}
	}

	vector<vector<int>> initCoords;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (check[i][j] == -1) {
				vector<int> initCoord = { i, j };
				initCoords.push_back(initCoord);
			}
		}
	}

	bfs(initCoords, 0);
	cout << days;
}