#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

// 그리디 알고리즘
long long connectBetweenJewelAndBag(priority_queue<pair<int, int>>& jewels, multiset<int>& bags, long long totalPrice) {
    int len = jewels.size();
    for (int i = 0; i < len; i++) {
        pair<int, int> highestPriceJewel = jewels.top();
        multiset<int>::iterator it = bags.lower_bound(highestPriceJewel.second);
        if (it != bags.end()) {
            totalPrice += highestPriceJewel.first;
            bags.erase(bags.find(*it));
        }
        jewels.pop();
    }
    return totalPrice;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    priority_queue<pair<int, int>> jewels;
    for (int i = 0; i < n; i++) {
        int m, v;
        cin >> m >> v;
        pair<int, int> jewel = make_pair(v, m);
        jewels.push(jewel);
    }

    multiset<int> bags;
    for (int i = 0; i < k; i++) {
        int c;
        cin >> c;
        bags.insert(c);
    }

    cout << connectBetweenJewelAndBag(jewels, bags, 0);

    return 0;
}