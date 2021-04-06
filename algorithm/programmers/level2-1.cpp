#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(string& S)
{
    vector<int> aidx;
    int answer = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'a')
            aidx.push_back(i);
    }

    if (aidx.size() % 3 != 0 || S.size() < 3)
    {
        answer = 0;
    }
    else
    {
        int term;
        if (aidx.size() == 0)
        {
            term = S.size() - 1;
            answer = (term * (term - 1)) / 2;
        }
        else
        {
            term = aidx.size() / 3;
            answer = (aidx[term * 1] - aidx[term * 1 - 1]) * (aidx[term * 2] - aidx[term * 2 - 1]);
        }
    }

    return answer;
}