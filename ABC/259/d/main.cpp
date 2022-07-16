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

int N;
ll s_x, s_y, t_x, t_y;
ll x[3005], y[3005];
ll r[3005];

bool isCollision(ll x_i, ll y_i, ll r_i, ll x_j, ll y_j, ll r_j)
{
  // 円の中心の距離 の2乗
  ll d = (x_i - x_j) * (x_i - x_j) + (y_i - y_j) * (y_i - y_j);

  // 2点間の距離が半径の差より短ければ内包された円
  bool in = d < (r_i - r_j) * (r_i - r_j);
  // 2点間の距離が半径の和よりながければ接していない円
  bool out = d > (r_i + r_j) * (r_i + r_j);
  // どちらでもなければどっかで接してる。
  return !(in || out);
}

bool isOn(ll x, ll y, ll r, ll t_x, ll t_y)
{
  ll xx = abs(x - t_x) * abs(x - t_x);
  ll yy = abs(y - t_y) * abs(y - t_y);
  return (r * r == xx + yy);
}

bool dfs(int s, int goal, vector<int> A[], bool visited[])
{
  // ノードsに来た。
  visited[s] = true;
  if (s == goal)
  {
    // ノードsはゴールだったのでOK
    return true;
  }
  // ノードsから行ける場所へ探索
  for (int u : A[s])
  {
    // ノードuはすでに訪問していたらSkip
    if (visited[u])
    {
      continue;
    }
    // ノードuからゴールに行ける？
    if (dfs(u, goal, A, visited))
    {
      return true;
    }
  }
  return false;
}

int main()
{
  cin >> N >> s_x >> s_y >> t_x >> t_y;
  rep1(i, N) cin >> x[i] >> y[i] >> r[i];

  int S = -1;
  int T = -1;
  // sの円周上の円n(start_circle)
  // tの円周上の円n(end_circle)
  // start_circleと接してる円
  // 隣接リスト vector<int> A[i] → 円iと接点のある円が羅列
  vector<int> A[3005];
  rep1(i, N)
  {
    if (isOn(x[i], y[i], r[i], s_x, s_y))
    {
      S = i;
    }
    if (isOn(x[i], y[i], r[i], t_x, t_y))
    {
      T = i;
    }
    for (int j = i + 1; j <= N; j++)
    {
      if (isCollision(x[i], y[i], r[i], x[j], y[j], r[j]))
      {
        A[i].push_back(j);
        A[j].push_back(i);
      }
    }
  }

  bool visited[3005] = {false};
  bool ok = dfs(S, T, A, visited);

  string ans = "No";
  if (ok)
  {
    ans = "Yes";
  }

  cout << ans << endl;
  return 0;
}
