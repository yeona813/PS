#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, T, P;
  cin >> N >> T >> P;

  vector<int> scores;
  for (int i = 0; i < N; i++)
  {
    int score;
    cin >> score;
    scores.push_back(score);
  }

  scores.push_back(T);
  sort(scores.rbegin(), scores.rend());

  int ranking = 0;
  for (int i = 0; i < scores.size(); i++)
  {
    if (scores[i] == T)
    {
      ranking = i + 1;
      break;
    }
  }

  if (N == P && scores.back() == T)
  {
    cout << "-1" << "\n";
  }
  else
  {
    cout << ranking << "\n";
  }
}
