#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, m;
int g[N][N];
int dist[N][N];
bool st[N][N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0, 1,0,-1 };

void bfs(int sx,int sy)
{
	deque<pair<int, int>> q;
	memset(dist, 0x3f, sizeof dist);
	dist[sx][sy] = 0;
	st[sx][sy] = true;
	while(!q.empty())
    {
		auto t = q.front();
		int x = t.first;
		int y = t.second;
		st[x][y] = true;
		q.pop_front();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (st[nx][ny]) continue;
			int w = g[nx][ny];
			if (dist[nx][ny] > dist[x][y] + w)
			{
				dist[nx][ny] = dist[x][y] + w;
				if (w == 0)
				{
					q.push_front({ nx,ny });
				}
				if (w == 1)
				{
					q.push_back({ nx,ny });
				}
			}
		}
	}

}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> g[i][j];
		}
	}
	bfs(1, 1);
	cout << dist[n][m] << '\n';
	return 0;
}
