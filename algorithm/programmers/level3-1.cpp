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

    // ���� �����
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

    // s > a�� ���� ��� ��θ� ��� ã�´�
    vector<vector<pair<int, int>>> allPath = findAllPathFromStartToEnd(s, a, fares);

    // ��� �������� b�� ���� �ּ� ��θ� ��� ã�´�
    vector<vector<pair<int, int>>> pathsFromEverywheeToB = findMinDistancePathsFromEverywhereToEnd(b, fares);

    // s > a�� ���� ��� ��θ� ��ȸ�Ѵ�
    int minPrice = 999999999999;
    for (int i = 0; i < allPath.size(); i++) {
        // ��� �ϳ����� ��� �б� ��ġ�� ã�� �ּ� ������ ������Ʈ�Ѵ�
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

            // �ּ� ������Ʈ
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