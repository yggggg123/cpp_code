#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int ans;
const int N = 40;
int n;
char g[N][N];
bool col[N];
bool dg[N];
bool udg[N];

void dfs(int u)
{
	if (u == n)
	{
		if (ans < 3)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (g[i][j] == 'Q')
					{
						printf("%d ", j + 1);
					}
				}
			}
			printf("\n");
		}
		ans++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!col[i] && !dg[u + i] && !udg[u - i + n])
		{
			g[u][i] = 'Q';
			col[i] = dg[u + i] = udg[u - i + n] = true;
			dfs(u + 1);
			g[u][i] = '.';
			col[i] = dg[u + i] = udg[u - i + n] = false;
		}
	}
}


int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			g[i][j] = '.';
		}
	}
	dfs(0);
	printf("%d\n", ans);
	return 0;
}