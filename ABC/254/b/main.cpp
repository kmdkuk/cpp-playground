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

int A[31][100] = {{0}};

int main()
{
  int N;
  cin >> N;

  rep1(i, N)
  {
    rep1(j, i)
    {
      if (j == 1)
      {
        A[i][j] = 1;
        cout << A[i][j];
      }
      else if (i == j)
      {
        A[i][j] = 1;
        cout << A[i][j];
        break;
      }
      else
      {
        A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
        cout << A[i][j];
      }
      if (j != i)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
