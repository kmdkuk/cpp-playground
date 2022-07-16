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
  string s, t;
  cin >> s >> t;

  // string s_dup, t_dup;
  // int end = 0;
  // rep(i, s.size())
  // {
  //   if (s[i] != s[end])
  //   {
  //     end++;
  //     s_dup[end] = s[i];
  //   }
  // }

  // end = 0;
  // rep(i, t.size())
  // {
  //   if (t[i] != t[end])
  //   {
  //     end++;
  //     t_dup[end] = t[i];
  //   }
  // }
  int sc = 0;
  bool ok = true;
  rep(i, t.size())
  {
    // cout << "watch, sc:" << sc << s[sc] << ", i:" << i << t[i] << endl;
    if (s[sc] == t[i])
    {
      sc++;
      continue;
    }
    if (s[sc] != t[i] &&
        !(s[sc - 1] == t[i] &&
          s[sc - 2] == t[i]))
    {
      // cout << "no, sc:" << sc << s[sc] << ", i:" << i << t[i] << endl;
      ok = false;
    }
    if (s[sc - 1] == t[i] &&
        s[sc - 2] == t[i])
    {
      while (t[i] == s[sc - 1])
      {
        i++;
      }
      //なんとかなる。
    }
    sc++;
    if (!ok)
    {
      break;
    }
  }

  string ans = "Yes";
  if (!ok)
  {
    ans = "No";
  }

  cout << ans << endl;
  return 0;
}
