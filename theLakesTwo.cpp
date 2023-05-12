#include "bits/stdc++.h"
using namespace std;



void solvetask() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m)), vis;
    vis = a;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];

    int ans = 0;
    int di[] = { -1, 1, 0, 0 }, dj[] = { 0, 0, -1, 1 };
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (!vis[i][j] && a[i][j]) {
        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = 1;
        int cur = a[i][j];
        while (!q.empty()) {
          int iz,jz;
          pair<int,int> p;

             p= q.front();
             iz=p.first;
             jz=p.second;
              q.pop();
            for (int k = 0; k < 4; k++) {
                int ii = iz + di[k], jj = jz + dj[k];
                if (ii >= 0 && ii < n && jj >= 0 && jj < m && !vis[ii][jj] && a[ii][jj]) {
                    cur += a[ii][jj];
                    vis[ii][jj] = 1;
                    q.push({ii, jj});
                }
            }
        }
        ans = max(ans, cur);
    }
    cout << ans << "\n";

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--) solvetask();
}
