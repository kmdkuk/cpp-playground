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

vector<P> get_first(int A[][11], int N)
{
  vector<P> res;
  int max = -1;
  bool nine = false;
  rep(i, N)
  {
    rep(j, N)
    {
      if (max < A[i][j])
      {
        max = A[i][j];
        if (max == 9)
        {
          nine = true;
          break;
        }
      }
    }
    if (nine)
    {
      break;
    }
  }
  rep(i, N) rep(j, N)
  {
    if (max == A[i][j])
    {
      res.push_back(P{i, j});
    }
  }
  return res;
}

int adv(int v)
{
  return (10 + v) % 10;
}

// 右 i++
// 左 i--
// 上 j--
// 下 j++
// 右上 i++ j--
// 右下 i++ j++
// 左上 i-- j--
// 左下 i-- j++
vector<P> get_next(P cur, int A[][11], int N)
{
  vector<P> res;
  P curs[] = {
      P{adv(cur.first + 1), adv(cur.second)},
      P{adv(cur.first - 1), adv(cur.second)},
      P{adv(cur.first), adv(cur.second)},
      P{adv(cur.first), adv(cur.second)},
      P{adv(cur.first + 1), adv(cur.second)},
      P{adv(cur.first + 1), adv(cur.second)},
      P{adv(cur.first - 1), adv(cur.second)},
      P{adv(cur.first - 1), adv(cur.second)},
  };

  map<P, int> kv = {};
  int max = -1;
  rep(i, 8)
  {
    int val = A[curs[i].first][curs[i].second];
    if (max < val)
    {
      max = val;
      kv[curs[i]] = val;
    }
  }

  for (auto c : curs)
  {
    if (max == kv[c])
    {
      res.push_back(c);
    }
  }
  return res;
}

int main()
{
  int N;
  int A[11][11];
  cin >> N;
  rep(i, N) rep(j, N) cin >> A[i][j];

  Graph selected;
  auto nines = get_first(A, N);
  for (auto ij : nines)
  {
    vector<P> route;
    int val;
    route.push_back(ij);
    val = A[ij.first][ij.second];
    auto now = ij;
    rep(i, N)
    {
      auto next = get_next(now, A, N);
      for (auto n : next)
      {
      }
    }
  }

  int ans = 0;

  cout << ans << endl;
  return 0;
}
