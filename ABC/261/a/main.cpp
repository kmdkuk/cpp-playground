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
  int s1, e1, s2, e2;
  cin >> s1 >> e1 >> s2 >> e2;
  int count = 0;
  if (s1 <= s2)
  {
    for (int i = s1; i < e1 + 1; i++)
    {
      if (s2 < i && i <= e2)
      {
        count++;
      }
    }
  }
  else if (s2 < s1)
  {
    for (int i = s2; i < e2 + 1; i++)
    {
      if (s1 < i && i <= e1)
      {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}
