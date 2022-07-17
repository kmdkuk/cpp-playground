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

    vector<vector<int>> table;

    vector<int> eat(N + 1, -1);
    rep1(tern, N)
    {
        int X;
        cin >> X;
        int min = 210000;
        int min_key = -1;
        rep(i, table.size())
        {
            if (table[i].back() < X)
            {
                continue;
            }
            if (table[i].back() < min)
            {
                min = table[i].back();
                min_key = i;
            }
        }

        if (min_key != -1)
        {
            table[min_key].emplace_back(X);
            if ((int)(table[min_key].size()) == K)
            {
                for (auto c : table[min_key])
                {
                    eat[c] = tern;
                }
                table.erase(table.begin() + min_key);
            }
        }
        else
        {
            table.emplace_back(vector<int>{X});
            if ((int)(table.back().size()) == K)
            {
                for (auto c : table.back())
                {
                    eat[c] = tern;
                }
                table.pop_back();
            }
        }
    }

    rep1(i, N)
    {
        cout << eat[i] << endl;
    }
    return 0;
}
