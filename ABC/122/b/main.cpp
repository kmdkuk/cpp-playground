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
  string S;
  cin >> S;
  int mx = 0;
  rep(i, (int)(S.size()))
  {
    int count = 0;
    for (int j = i; j < (int)(S.size()); j++)
    {
      if (string("ACGT").find(S[j]) != string::npos)
      {
        count++;
        // cout << "count " << count << "find " << S[j];
        mx = max(mx, count);
        continue;
      }
      // cout << endl;
      break;
    }
  }

  cout << mx << endl;
  return 0;
}
