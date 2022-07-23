#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
  int N;
  cin >> N;
  string A[N];
  rep(i, N) cin >> A[i];

  bool correct = true;
  for (int i = 0; i < N - 1; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      bool c = false;
      // cout << "check A[i][j]: " << A[i][j] << ", A[j][i]: " << A[j][i] << endl;
      switch (A[i][j])
      {
      case 'D':
        if (A[i][j] == A[j][i])
        {
          c = true;
        }
        break;
      case 'W':
        if (A[j][i] == 'L')
        {
          c = true;
        }
        break;
      case 'L':
        if (A[j][i] == 'W')
        {
          c = true;
        }
        break;
      default:
        break;
      }
      if (c)
      {
        continue;
      }
      correct = false;
      break;
    }
    if (!correct)
    {
      break;
    }
  }

  if (correct)
  {
    cout << "correct" << endl;
  }
  else
  {
    cout << "incorrect" << endl;
  }
  return 0;
}
