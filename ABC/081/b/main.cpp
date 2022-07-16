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
  int n;
  cin >> n;
  int a[n];
  rep(i, n)
  {
    cin >> a[i];
  }

  bool flag = true;
  int ans = 0;
  while (flag)
  {
    rep(i, n)
    {
      if (a[i] % 2 != 0)
      {
        flag = false;
        break;
      }
      a[i] = a[i] / 2;
      continue;
    }
    if (flag)
    {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
