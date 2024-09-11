#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {
	map<string, int> m;

	string wood;
	int count = 0;

	while (getline(cin, wood)) {
		m[wood]++;
		count++;
	}

	cout << fixed;
	cout.precision(4);

	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << " " << (double)i->second / count * 100 << "\n";
	}
}