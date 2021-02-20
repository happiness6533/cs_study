#include <iostream>
using namespace std;

int** graphAm;
int* checkBookDfs;

int answer = 0;
bool dfs(int start, int n) {
    checkBookDfs[start] = 1;
    if (answer == 5 && start != 0) {
        return true;
    }
    for (int i = 0; i < n; i++) {
        if (graphAm[start][i] == 1 && checkBookDfs[i] == 0) {
            answer++;
            dfs(i, n);
        }
        else if (i == n - 1) {
            answer--;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    graphAm = new int*[n];
    for (int i = 0; i < n; i++) {
        graphAm[i] = new int[n];
    }

    checkBookDfs = new int[n];

    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        graphAm[a][b] = 1;
        graphAm[b][a] = 1;
    }

    return dfs(0, n);
}