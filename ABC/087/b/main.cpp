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
  int a, b, c, x;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;

  int ans = 0;
  rep(i, a + 1)
  {
    if (i * 500 > x)
    {
      continue;
    }
    rep(j, b + 1)
    {
      if ((i * 500 + j * 100) > x)
      {
        continue;
      }
      rep(k, c + 1)
      {
        int res = i * 500 + j * 100 + k * 50;
        if (res == x)
        {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
