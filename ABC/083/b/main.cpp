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

int sumEachDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int ans = 0;
  rep1(i, n)
  {
    int sum = sumEachDigits(i);
    if (a <= sum && sum <= b)
    {
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}
