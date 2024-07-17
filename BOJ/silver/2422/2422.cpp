#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<bool>> check(N + 1, vector<bool>(N + 1, false));
  for (int i = 0; i < M; i++)
  {
    int num1, num2;
    cin >> num1 >> num2;
    check[num1][num2] = true;
    check[num2][num1] = true;
  }

  int count = 0;
  for (int i = 1; i <= N - 2; i++)
  {
    for (int j = i + 1; j <= N - 1; j++)
    {
      for (int k = j + 1; k <= N; k++)
      {
        if (check[i][j] || check[j][k] || check[i][k])
        {
          continue;
        }
        count++;
      }
    }
  }
  cout << count << "\n";
}
