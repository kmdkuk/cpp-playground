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
  rep(i, n) cin >> a[i];
  int alice = 0;
  int bob = 0;
  sort(a, a + n, greater<int>());
  rep(i, n)
  {
    if (i % 2 == 0)
    {
      alice += a[i];
      continue;
    }
    bob += a[i];
  }

  int ans = alice - bob;

  cout << ans << endl;
  return 0;
}
