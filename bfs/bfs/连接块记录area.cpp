#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

const int N = 100;
int n, m;
char g[N][N];
bool st[N][N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0, 1,0,-1 };


int bfs(int sx,int sy)
{
	int area = 0;
	queue<pair<int, int>> q;
	q.push({ sx,sy });
	st[sy][sy] = true;
	while (!q.empty())
	{
		auto t = q.front;
		q.pop();
		area++;
		int x = t.front;
		int y = t.second;
		
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (st[nx][ny]) continue;
			if (g[nx][ny] != 'W') continue;

			st[nx][ny] == true;
			q.push({ nx,ny });

		}
	}
	return area;
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> g[i];
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!st[i][j] && g[i][j] == 'W')
			{
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}