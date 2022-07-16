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
  int d[n];
  rep(i, n) cin >> d[i];
  sort(d, d + n, greater<int>());

  int end = 0;
  rep(i, n)
  {
    if (d[i] != d[end])
    {
      end++;
      d[end] = d[i];
    }
  }

  cout << end + 1 << endl;
  return 0;
}
