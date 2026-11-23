#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int n, m, t;
int sx, sy, ex, ey;
const int N = 100;
int g[N][N];
bool st[N][N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int res = 0;


void dfs(int x, int y)
{
	if (x == ex && y == ey)
	{
		res++;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
		if (g[nx][ny] == 1) continue;
		if (st[nx][ny] == true) continue;

		st[nx][ny] = true;
		dfs(nx, ny);
		st[nx][ny] = false;
	}
}

int main()
{
	cin >> n >> m >> t;
	cin >> sx >> sy >> ex >> ey;
	memset(g, 0, sizeof g);
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		g[x][y] = 1;
	}
	st[sx][sy] = true;
	dfs(sx, sy);
	cout << res << '\n';
	return 0;
}

