#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int n, m;
char g[N][N];
bool st[N][N];
int dx[] = { -1,-1,-1,0 ,0 ,1 ,1 ,1 };
int dy[] = { -1,0 ,1 ,-1,1 ,-1,0 ,1 };

void dfs(int x, int y)
{
	st[x][y] = true;
	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 && nx >= n && ny < 0 && ny >= m) continue;
		if (st[nx][ny]) continue;
		if (g[nx][ny] != 'W') continue;

		dfs(nx, ny);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> g[i];
	int cnt = 0;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (g[i][j] == 'W' && !st[i][j])
			{
				cnt++;
				dfs(i, j);
			}
		}
	}

	cout << cnt << '\n';
	return 0;
}