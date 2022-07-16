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
  int n, y;
  cin >> n >> y;
  int a = -1;
  int b = -1;
  int c = -1;
  bool found = false;
  rep(i, n + 1)
  {
    if (i * 10000 > y)
    {
      continue;
    }
    rep(j, n - i + 1)
    {
      if (i * 10000 + j * 5000 + (n - i - j) * 1000 == y)
      {
        a = i;
        b = j;
        c = (n - i - j);
        found = true;
        break;
      }
    }
    if (found)
    {
      break;
    }
  }

  cout << a << " " << b << " " << c << endl;
  return 0;
}
