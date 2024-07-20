#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> perm;
vector<bool> check;

void search()
{
  if (perm.size() == N)
  {
    for (int i = 0; i < perm.size(); i++)
    {
      cout << perm[i] << " ";
    }
    cout << "\n";
  }
  else
  {
    for (int i = 1; i <= N; i++)
    {
      if (!check[i])
      {
        check[i] = true;
        perm.push_back(i);
        search();
        check[i] = false;
        perm.pop_back();
      }
    }
  }
}

int main()
{
  cin >> N;
  check.resize(N + 1, false);
  search();
}
