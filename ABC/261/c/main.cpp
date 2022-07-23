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
  int N;
  cin >> N;
  string S[N];
  rep(i, N) cin >> S[i];
  map<string, int> folder;
  rep(i, N)
  {
    if (!folder.count(S[i]))
    {
      folder[S[i]] = 0;
      cout << S[i] << endl;
    }
    else
    {
      folder[S[i]]++;
      cout << S[i] << "(" << folder[S[i]] << ")" << endl;
    }
  }
  return 0;
}
