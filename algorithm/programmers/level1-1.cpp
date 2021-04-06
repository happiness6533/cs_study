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

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            s.insert(numbers[i] + numbers[j]);
        }
    }
    for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
        answer.push_back(*iter);
    }
    return answer;
}