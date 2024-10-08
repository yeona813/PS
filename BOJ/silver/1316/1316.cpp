#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    string str;
    cin >> str;
    vector<char> v;
    bool pass = true;
    v.push_back(str[0]);
    for (int j = 1; j < str.length(); j++)
    {
      if (find(v.begin(), v.end(), str[j]) == v.end())
      {
        v.push_back(str[j]);
      }
      else if (find(v.begin(), v.end(), str[j]) != v.end() && str[j - 1] != str[j])
      {
        pass = false;
        break;
      }
    }
    if (pass)
    {
      count++;
    }
  }

  cout << count << "\n";
}
