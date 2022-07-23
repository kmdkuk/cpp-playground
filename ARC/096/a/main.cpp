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
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  int ab = min(X, Y);
  int sum = 0;
  if (A + B >= 2 * C)
  {
    // ABピザ買ったほうがお得
    sum += 2 * ab * C;
    if (X > ab)
    {
      if (A >= 2 * C)
      {
        sum += (X - ab) * 2 * C;
      }
      else
      {
        sum += (X - ab) * A;
      }
    }
    if (Y > ab)
    {
      if (B >= 2 * C)
      {
        sum += (Y - ab) * 2 * C;
      }
      else
      {
        sum += (Y - ab) * B;
      }
    }
  }
  else
  {
    // ABピザ買わないほうがお得
    sum += X * A;
    sum += Y * B;
  }

  cout << sum << endl;
  return 0;
}
