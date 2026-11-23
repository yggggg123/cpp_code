#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int n, m;
const int N = 100;
int g[N][N];
bool st[N][N];
int dist[N][N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0 ,1,0, -1 };


int bfs()
{
	queue<pair<int, int>>  q;
	q.push({ 1,1 });
	st[1][1] = true;
	dist[1][1] = 0;

	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		int x = t.front;
		int y = t.second;
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (g[nx][ny] == 1) continue;
			if (st[nx][ny]) continue;

			st[nx][ny] = true;
			dist[nx][ny] = dist[x][y] + 1;
			q.push({ nx,ny });
			if (nx == n && ny == m) return dist[nx][ny];
		}

	}
	return -1;
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
	cout << bfs() << '\n';
	return 0;
}