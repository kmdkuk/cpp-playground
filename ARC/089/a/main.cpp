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
  int t[n + 1] = {0};
  int x[n + 1] = {0};
  int y[n + 1] = {0};
  rep(i, n) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool can = true;
  rep(i, n)
  {
    int t_diff = t[i + 1] - t[i];
    int d = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (d > t_diff)
    {
      can = false;
    }
    if (d % 2 != t_diff % 2)
    {
      can = false;
    }
  }

  string ans = "No";
  if (can)
  {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
