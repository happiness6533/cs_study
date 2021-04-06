#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

int findShortestNode(vector<int> distsOfAdjNodes, vector<int>& check) {
    int minDist, minIndex;
    minDist = 9999999999999999;
    minIndex = -1;
    for (int i = 0; i <= distsOfAdjNodes.size(); i++) {
        if (check[i] == 0) {
            if (distsOfAdjNodes[i] < minDist){
                minDist = distsOfAdjNodes[i];
                minIndex = i;
            }
        } 
    }
    return minDist;
}

/*
void updateDist(int newNode) {
    for (int i = 1; i <= V; i++) {
        if (check[i] !== 0) {
            if (distsOfAdjNodes[i] > distsOfAdjNodes[newNode] + map[newNode][i]) {
                distsOfAdjNodes[i] = distsOfAdjNodes[newNode] + map[newNode][i];
            }
        }
    }
}
int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = 0;

    // 맵을 만든다
    vector<vector<pair<int, int>>> map;
    for (int i = 0; i < n; i++) {
        vector<pair<int, int>> fromAtoBList;
        map.push_back(fromAtoB);
    }
    for (int i = 0; i < fares.size(); i++) {
        int A = fares[i][0];
        int B = fares[i][1];
        int price = fares[i][2];
        pair<int, int> fromAtoB = ;
        map.push_back(fromAtoB);
    }

    // s > a로 가는 모든 경로를 모두 찾는다
    vector<vector<pair<int, int>>> allPath = findAllPathFromStartToEnd(s, a, fares);

    // 모든 지점에서 b로 가는 최소 경로를 모두 찾는다
    vector<vector<pair<int, int>>> pathsFromEverywheeToB = findMinDistancePathsFromEverywhereToEnd(b, fares);

    // s > a로 가는 모든 경로를 순회한다
    int minPrice = 999999999999;
    for (int i = 0; i < allPath.size(); i++) {
        // 경로 하나마다 모든 분기 위치를 찾고 최소 가격을 업데이트한다
        vector<pair<int, int>> currentPath = allPath[i];

        int currentPrice = 0;
        for (int j = 0; j < currentPath.size(); j++) {
            currentPrice += currentPath[j].second;
        }

        for (int j = 0; j < currentPath.size() - 1; j++) {
            int startPointOfDivide = currentPath[j].first;
            vector<pair<int, int>> pathFromstartPointOfDivideToB = pathsFromEverywheeToB[startPointOfDivide];
            for (int k = 0; k < pathFromstartPointOfDivideToB.size(); k++) {
                currentPrice += pathFromstartPointOfDivideToB[k].second;
            }

            // 최소 업데이트
            if (minPrice > currentPrice) {
                minPrice = currentPrice;
            }
        }
    }
    return minPrice;
}
void dijkstra(int n, vector<vector<int>> mapOfDist, int start, vector<int> distances, vector<int> check) {
    for (int i = 0; i < n; i++) {
        distances[i] = mapOfDist[start][i];
    }
    check[start] = 1;
    for (int i = 0; i < n; i++) {
        int nextNode = findShortestNode(distances, check);
        check[nextNode] = 1;
        updateDist(nextNode);
    }
}

*/