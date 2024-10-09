#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> v;
  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    if (num == 0)
    {
      if (v.empty())
      {
        continue;
      }
      else
      {
        v.pop_back();
      }
    }
    else
    {
      v.push_back(num);
    }
  }

  int count = 0;
  for (int i = 0; i < v.size(); i++)
  {
    count += v[i];
  }

  cout << count << "\n";
}
