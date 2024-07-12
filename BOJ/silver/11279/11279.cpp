#include <iostream>
#include <queue>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  priority_queue<int> pq;

  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    if (num == 0 && pq.empty())
    {
      cout << 0 << "\n";
    }
    else if (num == 0)
    {
      cout << pq.top() << "\n";
      pq.pop();
    }
    else
    {
      pq.push(num);
    }
  }
}