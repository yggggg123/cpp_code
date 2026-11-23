#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int n, m, sx, sy;
const int N = 100;
bool st[N][N];
int dist[N][N];
int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };


void bfs()
{
	queue<pair<int, int>>  q;
	q.push({ sx,sy });
	st[sx][sy] = true;
	dist[sx][sy] = 0;

	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		int x = t.front;
		int y = t.second;
		for (int i = 0; i < 8; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (st[nx][ny]) continue;

			st[nx][ny] = true;
			dist[nx][ny] = dist[x][y] + 1;
			q.push({ nx,ny });
		}
	}
}



int main()
{
	cin >> n >> m >> sx >> sy;
	bfs();
	memset(dist, -1, sizeof dist);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << dist[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}