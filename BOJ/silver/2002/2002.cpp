#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int main() {
	int N;
	cin >> N;

	unordered_map<string, int> um;
	vector<string> youngsick;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		um.insert({ str, i });
	}

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		youngsick.push_back(str);
	}

	int count = 0;

	for (int i = 0; i < youngsick.size(); i++) {
		for (int j = i + 1; j < youngsick.size(); j++) {
			if (um[youngsick[i]] > um[youngsick[j]]) {
				count++;
				break;
			}
		}
	}

	cout << count;

}