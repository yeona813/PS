#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  while (true)
  {
    stack<char> stack;
    string str;
    getline(cin, str);
    if (str == ".")
    {
      break;
    }
    bool check = true;
    for (int i = 0; i < str.length(); i++)
    {
      if (str[i] == '[' || str[i] == '(')
      {
        stack.push(str[i]);
      }
      else if (str[i] == ']')
      {
        if (!stack.empty() && stack.top() == '[')
        {
          stack.pop();
        }
        else
        {
          check = false;
          break;
        }
      }
      else if (str[i] == ')')
      {
        if (!stack.empty() && stack.top() == '(')
        {
          stack.pop();
        }
        else
        {
          check = false;
          break;
        }
      }
    }

    if (check && stack.empty())
    {
      cout << "yes" << '\n';
    }
    else
    {
      cout << "no" << "\n";
    }
  }
}