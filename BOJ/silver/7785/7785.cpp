#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    unordered_map<string, bool> m;

    for (int i = 0; i < N; i++) {
        string person, check;
        cin >> person >> check;

        if (check == "enter") {
            m[person] = true;
        } else if (check == "leave") {
            m[person] = false;
        }
    }

    vector<string> names;
    for (const auto& entry : m) {
        if (entry.second) {
            names.push_back(entry.first);
        }
    }

    sort(names.begin(), names.end(), greater<string>());

    for (const string& name : names) {
        cout << name << '\n';
    }
    return 0;
}
