#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int v[N];
int w[N];
int dp[N][N];

int  main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (j >= w[i]) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][m];
}