#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int g[N][N];
int dist[N][N];
int n, m;
int dx[] = { -1,0,1,0 };
int dy[] = { 0, 1,0,-1 };

void bfs()
{
	queue<pair<int, int>> q;
	memset(dist, -1, sizeof dist);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (g[i][j] == 1)
			{
				q.push({ i,j });
				dist[i][j] == 0;
			}
		}
	}
	while (!q.empty())
	{
		auto t = q.front();
		int x = t.first;
		int y = t.second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (g[nx][ny] == 1) continue;
			if (dist[nx][ny] != -1) continue;
			dist[nx][ny] = dist[x][y] + 1;
			q.push({ nx,ny });
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> g[i][j];
		}
	}

	bfs();

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