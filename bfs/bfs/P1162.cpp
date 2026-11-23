#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 35;
int n;
int g[N][N];
bool st[N][N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0, 1,0,-1 };


int bfs(int sx, int sy)
{
	int area = 0;
	queue<pair<int, int>> q;
	q.push({ sx,sy });
	st[sy][sy] = true;
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		area++;
		int x = t.first;
		int y = t.second;

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx > n + 1 || ny < 0 || ny > n + 1) continue;
			if (st[nx][ny]) continue;
			if (g[nx][ny] == 1) continue;

			st[nx][ny] = true;
			q.push({ nx,ny });

		}
	}
	return area;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> g[i][j];
		}
	}
	bfs(0, 0);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (!st[i][j] && g[i][j] == 0)
			{
				g[i][j] = 2;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << g[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}