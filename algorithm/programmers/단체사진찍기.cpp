#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>
#include <set>
using namespace std;

void dfs(int currentNode, vector<vector<int>> map, vector<int>& check, int cnt) {
    vector<int> adjNodes = map[currentNode];
    for (int i = 0; i < adjNodes.size(); i++) {
        if (check[adjNodes[i]] == 0) {
            check[adjNodes[i]] = cnt;
            cnt++;
            dfs(adjNodes[i], map, check, cnt);
            // 여기가 경로 1개가 완결된 지점
            cnt--;
        }
    }
    return;
}

int solution(int n, vector<string> data) {
    vector<char> people = { 'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T' };
    vector<char> arrayOfPeople;
    for (int i = 0; i < data.size(); i++) {}
    int answer = 0;
    return answer;
}