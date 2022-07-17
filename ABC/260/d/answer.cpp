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
  int N, K;
  cin >> N >> K;
  vector<int> eat(N + 1, -1);

  // table["見えてる数"] = 山にあるカード
  map<int, vector<int>> table;
  rep1(tern, N)
  {
    int X;
    cin >> X;

    // upper_boundとlower_boundは2分探索
    // upper_bound(X) Xより大きいイテレータを返す。
    // lower_bound(X) X以上のイテレータを返す。
    // https://qiita.com/ganyariya/items/33f1326154b85db465c3
    auto it = table.lower_bound(X);
    // X 以上のものがあった場合。
    if (it != table.end())
    {
      // moveでtable[X]に参照を渡す。
      // it->firt → key
      // it->second → value
      table[X] = move(it->second);
      // 要らなくなったitはtableから削除。
      table.erase(it);
    }
    // ↑のifが通らなかったら新規作成だし、通ってたらvectorに追記
    table[X].push_back(X);
    if (table[X].size() == K)
    {
      for (auto card : table[X])
      {
        eat[card] = tern;
      }
      table.erase(X);
    }
  }

  rep1(i, N)
  {
    cout << eat[i] << endl;
  }
  return 0;
}
