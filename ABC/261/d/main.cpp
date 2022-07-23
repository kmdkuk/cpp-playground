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

struct node
{
  int count;
  ll sum;
};

pair<bool, bool> visited[5001] = {{false, false}};
int N, M;

node dfs(int count, node v, ll X[], map<int, ll> bonus)
{
  count++;
  if (count > N)
  {
    return v;
  }
  // 表を出した場合
  int new_count = v.count + 1;
  // cout << count << "回目に面を出した場合(連続" << new_count << "), ";
  node go_front = node{
      new_count,
      v.sum,
  };
  // cout << X[count] << "獲得, ";
  go_front.sum += X[count];
  if (bonus.count(v.count + 1))
  {
    // cout << bonus[v.count + 1] << "bonus獲得、";
    go_front.sum += bonus[v.count + 1];
  }
  // cout << "合計" << go_front.sum << endl;
  node front = dfs(count, go_front, X, bonus);

  // 裏を出した場合
  node go_back = node{
      0,
      v.sum,
  };
  // cout << count << "回目に裏を出した場合, " << go_back.sum << endl;
  node back = dfs(count, go_back, X, bonus);

  if (front.sum >= back.sum)
  {
    return front;
  }
  else
  {
    return back;
  }
}

int main()
{
  cin >> N >> M;
  ll X[N + 1];
  rep1(i, N) cin >> X[i];
  map<int, ll> bonus;

  rep(i, M)
  {
    int C;
    int Y;
    cin >> C >> Y;
    bonus[C] = Y;
  }

  node n = dfs(0, node{0, 0}, X, bonus);
  cout << n.sum << endl;
  return 0;
}
