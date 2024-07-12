#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
  string str, bomb;
  stack<char> s;

  cin >> str >> bomb;

  string result;

  for (int i = 0; i < str.length(); i++)
  {
    s.push(str[i]);
    if (str[i] == bomb[bomb.length() - 1] && s.size() >= bomb.length())
    {
      string tmp;

      for (int j = 0; j < bomb.length(); j++)
      {
        tmp.push_back(s.top());
        s.pop();
      }

      reverse(tmp.begin(), tmp.end());

      if (tmp.compare(bomb) != 0)
      {
        for (int k = 0; k < tmp.length(); k++)
        {
          s.push(tmp[k]);
        }
      }
    }
  }

  while (!s.empty())
  {
    result.push_back(s.top());
    s.pop();
  }

  reverse(result.begin(), result.end());

  if (result.empty())
  {
    cout << "FRULA";
  }
  else
  {
    cout << result;
  }
}
