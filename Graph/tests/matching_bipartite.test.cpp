// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/bipartitematching

#include <bits/stdc++.h>
using namespace std;

#include "../Matching/BipartiteMatching.h"

#define REP(i, a) for (int i = 0, _##i = (a); i < _##i; ++i)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int left, right, m; cin >> left >> right >> m;
    Matching mat(max(left, right));
    while (m--) {
        int u, v; cin >> u >> v;
        mat.addEdge(u, v);
    }

    REP(i,left) {
        shuffle(mat.ke[i].begin(), mat.ke[i].end(), rng);
    }

    cout << mat.match() << '\n';
    REP(i,left) {
        if (mat.matchL[i] >= 0) {
            cout << i << ' ' << mat.matchL[i] << '\n';
        }
    }
    return 0;
}
