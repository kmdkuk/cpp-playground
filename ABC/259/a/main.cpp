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
  // N才のとき, Tcm
  // X才まで, Dcm伸びる
  // M才のときanscm
  int N, M, X, T, D;
  cin >> N >> M >> X >> T >> D;

  int ans = T;
  for (int i = X; i > M; i--)
  {
    ans -= D;
    // cout << i - 1 << " years old, " << ans << "cm" << endl;
  }

  cout << ans << endl;
  return 0;
}
