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
  int k;
  cin >> n >> k;
  vector<int> a(n);
  vector<vector<int>> b(k);
  rep(i, n)
  {
    cin >> a[i];
    b[i % k].push_back(a[i]);
  }
  rep(i, k)
  {
    // それぞれの行でソート
    sort(b[i].rbegin(), b[i].rend());
  }

  // aをソート
  sort(a.begin(), a.end());

  // bからソート処理をしたnaを復元
  vector<int> na;
  rep(i, n)
  {
    na.push_back(b[i % k].back());
    b[i % k].pop_back();
  }

  if (a == na)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
