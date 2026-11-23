#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int A[N];
int B[N];
int dp[N][N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++);
    {
		cin >> A[i];
	}
	for (int j = 1; j <= m; j++)
	{
		cin >> B[j];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (A[i] == B[j])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[n][m];
	return 0;
}