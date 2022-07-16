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
  string s;
  cin >> s;
  string divide[4] = {
      "dream",
      "dreamer",
      "erase",
      "eraser",
  };

  reverse(s.begin(), s.end());
  rep(i, 4) reverse(divide[i].begin(), divide[i].end());

  bool can = true;
  for (int i = 0; i < (int)(s.size());)
  {
    // cout << "s.size():" << s.size() << ", i: " << i << endl;
    bool can2 = false;
    rep(j, 4)
    {
      string d = divide[j];
      if (s.substr(i, d.size()) == d)
      {
        can2 = true;
        i += d.size();
        reverse(d.begin(), d.end());
        // cout << d << endl;
        break;
      }
    }
    if (!can2)
    {
      can = false;
      break;
    }
  }
  string ans = "NO";
  if (can)
  {
    ans = "YES";
  }

  cout << ans << endl;
  return 0;
}
