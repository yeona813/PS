#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

bool isSimilar(string firstWord, string otherWord) {
    if (abs((int)(firstWord.size() - otherWord.size())) > 1) {
        return false;  // 길이 차이가 1 이상이면 비슷한 단어가 아님
    }

    unordered_map<char, int> firstMap, otherMap;
    for (char ch : firstWord) {
        firstMap[ch]++;
    }
    for (char ch : otherWord) {
        otherMap[ch]++;
    }

    int diff = 0, excess = 0;

    for (auto& p : firstMap) {
        char ch = p.first;
        int cnt1 = p.second;
        int cnt2 = otherMap[ch];

        if (cnt1 > cnt2) {
            diff += (cnt1 - cnt2);
        }
        else if (cnt1 < cnt2) {
            excess += (cnt2 - cnt1);
        }
    }

    for (auto& p : otherMap) {
        if (firstMap.find(p.first) == firstMap.end()) {
            excess += p.second; // firstWord에 없는 문자들이 있는 경우
        }
    }

    // 문자 차이와 초과 문자의 합이 1 이하일 때 비슷한 단어
    return (diff <= 1 && excess <= 1);
}

int main() {
    int N;
    cin >> N;

    string firstWord;
    cin >> firstWord;

    int count = 0;

    for (int i = 1; i < N; i++) {
        string otherWord;
        cin >> otherWord;

        if (isSimilar(firstWord, otherWord)) {
            count++;
        }
    }

    cout << count << endl;
}
