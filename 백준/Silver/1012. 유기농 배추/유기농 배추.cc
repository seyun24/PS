#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second 
int board[51][51];
int vis[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m,k,T;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        fill(&board[0][0], &board[0][0] + 51 * 51, 0);
        fill(&vis[0][0], &vis[0][0] + 51 * 51, 0);
        cin >> m >> n;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            board[x][y]=1;
        }
        int cnt = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                if (vis[i][j] ==1 || board[i][j]==0) continue;
                cnt++;
                queue<pair<int, int> > Q;
                vis[i][j] = 1;
                Q.push({ i,j });
                while (!Q.empty()) {
                    pair<int, int> cur = Q.front(); Q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                        if (vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({ nx,ny });
                    }
                }
               
            }
        cout << cnt << "\n";
    }
}