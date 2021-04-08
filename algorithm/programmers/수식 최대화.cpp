#include <vector>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

bool isPureString(string expression, const char* dividers) {
	for (int i = 0; i < expression.size(); i++) {
		if (expression[i] == dividers[0] 
			|| expression[i] == dividers[1]
			|| expression[i] == dividers[2]) {
			return false;
		}
	}
	return true;
}

int divide(string expression, const char* dividers, int index) {
	vector<string> subExpressions;
	int startIndex = 0;
	for (int i = 0; i < expression.size(); i++) {
		if (expression[i] == dividers[index]) {
			string subExpression = expression.substr(startIndex, i);
			if (!isPureString(subExpression, dividers)) {
				index++;
				return divide(subExpression, dividers, index);
			} else {
				// 이렇게 하면 다시 합치는 부분이 없군!
				// return subExpression;
				subExpressions.push_back(subExpression);
				startIndex = i + 1;
				i++;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < subExpressions.size(); i++) {
		sum += stoi(subExpressions[i]);
	}
	return sum;
}

long long solution(string expression) {
	vector<const char*> dividersVector = { "+-*", "+*-", "*+-", "-+*", "-*+", "*-+" };

	long long answer = 0;
	for (int i = 0; i < 6; i++) {
		const char* divider = dividersVector[i];
		int answerCandidate = divide(expression, divider, 0);
		if (answerCandidate > answer) {
			answer = answerCandidate;
		}
	}
	return answer;
}

int main() {
	cout << solution("100-200*300-500+20");
	return 0;
}