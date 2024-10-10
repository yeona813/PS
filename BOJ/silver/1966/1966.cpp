#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int N, M;
    cin >> N >> M;
    queue<pair<int, int>> q;
    priority_queue<int> pq;

    for (int j = 0; j < N; j++)
    {
      int num;
      cin >> num;
      q.push({j, num});
      pq.push(num);
    }

    int count = 0;
    while (!q.empty())
    {
      int first = q.front().first;
      int second = q.front().second;
      q.pop();

      if (second == pq.top())
      {
        pq.pop();
        count++;

        if (first == M)
        {
          cout << count << "\n";
          break;
        }
      }
      else
      {
        q.push({first, second});
      }
    }
  }
}
