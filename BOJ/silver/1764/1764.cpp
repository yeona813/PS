#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  unordered_set<string> set;
  vector<string> result;

  for (int i = 0; i < N + M; i++)
  {
    string str;
    cin >> str;
    if (set.find(str) != set.end())
    {
      result.push_back(str);
    }
    else
    {
      set.insert(str);
    }
  }

  cout << result.size() << endl;

  sort(result.begin(), result.end());

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}
