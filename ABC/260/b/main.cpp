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

struct Points
{
  int id, math, english;
};

bool ascMath(Points x, Points y)
{
  return x.math != y.math ? x.math < y.math : x.id > y.id;
}

bool ascEnglish(Points x, Points y)
{
  return x.english != y.english ? x.english < y.english : x.id > y.id;
}

bool ascAll(Points x, Points y)
{
  int x_all = x.math + x.english;
  int y_all = y.math + y.english;
  return x_all != y_all ? x_all < y_all : x.id > y.id;
}

int main()
{
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  vector<Points> A(N);
  vector<int> oks;
  rep(i, N)
  {
    A[i].id = i + 1;
    cin >> A[i].math;
  }
  rep(i, N)
  {
    cin >> A[i].english;
  }

  sort(A.begin(), A.end(), ascMath);
  // cout << "math" << endl;
  rep(i, X)
  {
    // cout << A.back().id << endl;
    oks.push_back(A.back().id);
    A.pop_back();
  }
  // cout << endl;

  sort(A.begin(), A.end(), ascEnglish);
  // cout << "english" << endl;
  rep(i, Y)
  {
    // cout << A.back().id << endl;
    oks.push_back(A.back().id);
    A.pop_back();
  }

  // cout << "all" << endl;
  sort(A.begin(), A.end(), ascAll);
  rep(i, Z)
  {
    // cout << A.back().id << endl;
    oks.push_back(A.back().id);
    A.pop_back();
  }

  // cout << endl;

  sort(oks.begin(), oks.end());
  for (auto ok : oks)
  {
    cout << ok << endl;
  }
  return 0;
}
