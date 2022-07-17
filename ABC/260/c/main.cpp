#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

// redN = redN-1 + blueN*x
// redN
P get_jelly_from_red(int level, ll count, int X)
{
  if (level < 2)
  {
    return P{count, 0};
  }
  return P{count, X * count};
}

P get_jelly_from_blue(int level, ll count, int Y)
{
  if (level < 2)
  {
    return P{count, 0};
  }
  return P{count, Y * count};
}

int main()
{
  int N, X, Y;
  cin >> N >> X >> Y;

  vector<ll> red(11, 0);
  vector<ll> blue(11, 0);

  red[N] = 1;
  for (int i = N; i > 1; i--)
  {
    // cout << "level: " << i << endl;
    if (red[i] > 0)
    {
      P from_red = get_jelly_from_red(i, red[i], X);
      red[i] = 0;
      // cout << from_red.first << " " << from_red.second << endl;
      red[i - 1] = from_red.first;
      blue[i] += from_red.second;
      // cout << "red level: " << i << ", " << from_red.first << ", " << from_red.second << endl;
    }
    if (blue[i] > 0)
    {
      P from_blue = get_jelly_from_blue(i, blue[i], Y);
      blue[i] = 0;
      red[i - 1] += from_blue.first;
      blue[i - 1] += from_blue.second;
      // cout << "blue level: " << i << ", " << from_blue.first << ", " << from_blue.second << endl;
    }
    // cout << "red[" << i - 1 << "]: " << red[i - 1] << ", blue[" << i - 1 << "]: " << blue[i - 1] << endl;
  }

  cout << blue[1] << endl;

  return 0;
}
