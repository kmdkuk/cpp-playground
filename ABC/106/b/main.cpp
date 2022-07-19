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

int main() {
  int N;
  cin >> N;

  int ans = 0;

  for (int num = 1; num < (int)(N + 1); num += 2) {
    int count = 0;
    rep1(i, num) {
      if (num % i == 0) {
        count++;
      }
    }
    if (count == 8) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
