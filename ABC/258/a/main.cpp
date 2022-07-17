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
  int K;
  cin >> K;

  int basehour = 21;

  int hour = (int)(K / 60);
  int minute = K % 60;

  printf("%02d:%02d\n", (basehour + hour) % 24, minute);

  return 0;
}
