#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 510;
int a[N][N];
vector<vector<int>> dp(N, vector<int>(N, -0x3f));

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	dp[1][1] = a[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
		}
	}
	int res = 0;
	for (int j = 1; j <= n; j++)
	{
		res = max(res, dp[n][j]);
	}
	cout << res << '\n';
	return 0;
}
