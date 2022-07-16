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
  long double a, b, d;
  cin >> a >> b >> d;

  // a'= a * cos d - b * sin d
  // b' = a * sin d + b * cos d
  long double a_dash, b_dash;
  long double d_radian = d * (M_PI / 180.0);
  a_dash = a * cos(d_radian) - b * sin(d_radian);
  b_dash = a * sin(d_radian) + b * cos(d_radian);

  cout << setprecision(20) << a_dash << " " << b_dash << endl;
  return 0;
}
